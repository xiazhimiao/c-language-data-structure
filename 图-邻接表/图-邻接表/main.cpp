#include <iostream>
#include <queue>
#define MAXSIZE 1024
using namespace std;

typedef struct _EdgeNode//�������ӵı� 
{
	int adjvex;//�ڽӵĶ���	
	int weight;//Ȩ��
	struct _EdgeNode* next;//ָ����һ������/��
}EdgeNode;

typedef struct _VertexNode//������
{
	char data;//�������
	struct _EdgeNode* first;
}VertexNode, * AdjList;

typedef struct _AdJListGraph
{
	AdjList adjList;//��������
	int numVex;
	int numEdg;
}AdjListGraph;

//ͼ�ĳ�ʼ��
bool Init(AdjListGraph& gh)
{
	gh.adjList = new VertexNode[MAXSIZE];//���䶥�������ַ
	if (!gh.adjList) return false;

	gh.numEdg = 0;
	gh.numVex = 0;

}

//Ѱ�Ҷ���������ҵ�������±�
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

//ͼ�Ĵ���
void CreateALGraph(AdjListGraph& gh)
{
	cout << "����ͼ�Ķ����� �ͱ�����";
	cin >> gh.numVex >> gh.numEdg;
	if (gh.numVex > MAXSIZE) return;

	cout << endl << "������ض��㣺 " << endl;
	//���涥��
	for (int i = 0; i < gh.numVex; i++)
	{
		cin >> gh.adjList[i].data;
		gh.adjList[i].first = NULL;
	}

	char vi, vj;//��������Ķ��㣻
	int i, j;
	cout << "�����������(vi,vj)�ϵĶ�����ţ�" << endl;

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

bool visited[MAXSIZE] = { 0 };//ȫ�����������ж�Ԫ���Ƿ񱻷��ʹ�

//��ͼ�ϵĶ��������ȱ���
void DFS(AdjListGraph& gh, int i)
{
	int nextNum = -1;
	if (visited[i])//����ý���Ѿ��������򷵻� 
		return;

	//���ʸý��
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

//�����ж��������ȱ���
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

//��ͼ�ϵĶ�����й�ȱ���
void BFS(AdjListGraph& gh, int i)
{
	int cur = -1;
	queue<int> q;//��������
	q.push(i);
	while (!q.empty())//���в�Ϊ��
	{
		cur = q.front();//ȡ���е�ͷԪ�أ�cur��ǰ��
		if (visited[cur] == false)
		{
			cout << gh.adjList[cur].data << " ";
			visited[cur] = true;

		}
		q.pop();
		//ȡ��ǰ������ڵĽ�����
		EdgeNode* tmp = gh.adjList[cur].first;
		while (tmp != NULL)
		{
			q.push(tmp->adjvex);
			tmp = tmp->next;
		}
	}
}
//�����ж�����й�ȱ���
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
	cout << "���ڴ����ڽӱ��밴��ʾ��������..." << endl;
	Init(G);//��ʼ��
	CreateALGraph(G);//����ͼ

	cout << "���ڽ���������ȱ����������������:" << endl;


	//������ȱ���
	DFS_All(G);
	cout << endl;//����

	memset(visited, 0, sizeof(visited));

	cout << "���ڽ��й�����ȱ����������������:" << endl;
	//������ȱ���
	BFS_All(G);

	cout << endl;
}