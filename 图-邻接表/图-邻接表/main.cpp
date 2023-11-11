#include <iostream>
#include <queue>
#define MAXSIZE 1024
using namespace std;

typedef struct _EdgeNode//与结点连接的边 
{
	int adjvex;//邻接的顶点	
	int weight;//权重
	struct _EdgeNode* next;//指向下一个顶点/边
}EdgeNode;

typedef struct _VertexNode//顶点结点
{
	char data;//结点数据
	struct _EdgeNode* first;
}VertexNode, * AdjList;

typedef struct _AdJListGraph
{
	AdjList adjList;//顶点数组
	int numVex;
	int numEdg;
}AdjListGraph;

//图的初始化
bool Init(AdjListGraph& gh)
{
	gh.adjList = new VertexNode[MAXSIZE];//分配顶点数组地址
	if (!gh.adjList) return false;

	gh.numEdg = 0;
	gh.numVex = 0;

}

//寻找顶点的数据找到数组的下标
int Location(AdjListGraph gh, char c)
{
	if (gh.numVex <= 0) return -1;

	for (int i = 0; i < gh.numVex; i++)
	{
		if (c == gh.adjList[i].data)
		{
			return i;
		}
	}

	return-1;
}

//图的创建
void CreateALGraph(AdjListGraph& gh)
{
	cout << "输入图的定点数 和边数：";
	cin >> gh.numVex >> gh.numEdg;
	if (gh.numVex > MAXSIZE) return;

	cout << endl << "输入相关顶点： " << endl;
	//保存顶点
	for (int i = 0; i < gh.numVex; i++)
	{
		cin >> gh.adjList[i].data;
		gh.adjList[i].first = NULL;
	}

	char vi, vj;//保存输入的顶点；
	int i, j;
	cout << "请依次输入边(vi,vj)上的顶点序号：" << endl;

	for (int k = 0; k < gh.numEdg; k++)
	{
		cin >> vi >> vj;
		i = Location(gh, vi);
		j = Location(gh, vj);

		if (i >= 0 && j >= 0)
		{
			EdgeNode* temp = new EdgeNode;
			temp->adjvex = j;
			temp->next = gh.adjList[i].first;
			gh.adjList[i].first = temp;
		}
	}
}

bool visited[MAXSIZE] = { 0 };//全局数据用来判断元素是否被访问过

//对图上的顶点进行深度遍历
void DFS(AdjListGraph& gh, int i)
{
	int nextNum = -1;
	if (visited[i])//如果该结点已经被访问则返回 
		return;

	//访问该结点
	cout << gh.adjList[i].data << " ";
	visited[i] = true;

	EdgeNode* tmp = gh.adjList[i].first;
	while (tmp)
	{
		nextNum = tmp->adjvex;
		if (visited[nextNum] == false)
		{
			DFS(gh, nextNum);
		}
		tmp = tmp->next;
	}

}

//对所有顶点进行深度遍历
void DFS_All(AdjListGraph& gh)
{
	for (int i = 0; i < gh.numVex; i++)
	{
		if (visited[i] == false)
		{
			DFS(gh, i);
		}
	}
}

//对图上的顶点进行广度遍历
void BFS(AdjListGraph& gh, int i)
{
	int cur = -1;
	queue<int> q;//创建队列
	q.push(i);
	while (!q.empty())//队列不为空
	{
		cur = q.front();//取队列的头元素（cur当前）
		if (visited[cur] == false)
		{
			cout << gh.adjList[cur].data << " ";
			visited[cur] = true;

		}
		q.pop();
		//取当前结点相邻的结点入队
		EdgeNode* tmp = gh.adjList[cur].first;
		while (tmp != NULL)
		{
			q.push(tmp->adjvex);
			tmp = tmp->next;
		}
	}
}
//对所有顶点进行广度遍历
void BFS_All(AdjListGraph& gh)
{
	for (int i = 0; i < gh.numVex; i++)
	{
		if (visited[i] == false)
		{
			BFS(gh, i);
		}
	}
}
int main()
{

	AdjListGraph G;
	cout << "正在创建邻接表，请按提示进行输入..." << endl;
	Init(G);//初始化
	CreateALGraph(G);//创建图

	cout << "正在进行深度优先遍历，遍历结果如下:" << endl;


	//深度优先遍历
	DFS_All(G);
	cout << endl;//换行

	memset(visited, 0, sizeof(visited));

	cout << "正在进行广度优先遍历，遍历结果如下:" << endl;
	//广度优先遍历
	BFS_All(G);

	cout << endl;
}