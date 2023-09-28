#include <iostream>
using namespace std;
#define MAXSIZE 10 

typedef int ElemType; 
typedef struct list
{
	ElemType elem[MAXSIZE];   //int������ 
	int length;  //˳����� 
}Sqlist;  //˳������� 

//����˳���  
void CreateList(Sqlist &L) 
{
	int i;
	cout << "������˳����ȣ�";
	cin >> L.length; 
	cout << "������˳���Ԫ�أ�";
	for(i=0; i<L.length; i++)
		cin >> L.elem[i];
} 

//���˳��� 
void PrintList(Sqlist &L)
{
	int i;
	cout << "˳�������Ԫ���У�"; 
	for(i=0; i<L.length; i++)
		cout << L.elem[i] << "  ";
	cout << endl << "--------------------------------" << endl;
}

//��˳���ĵ�i��λ�ò���һ��Ԫ��x
void InsertList(Sqlist &L, int i, ElemType x)
{
	int j;
	for(j=L.length-1; j>=i-1; j--) 
		L.elem[j+1]= L.elem[j]; 
	L.elem[i-1]= x;  
	++L.length;  
} 

//�ڱ����������Ԫ�ص��±�ֵ 
int SerchElem(Sqlist &L,ElemType e){
	for(int i=0;i<L.length;i++){
		if(e==L.elem[i])
		  return i;
	}
	return -1;
}
//��˳������ҵ����������Ԫ�ز�����ǰ�������Ԫ�� 
void InsertList(Sqlist &L) {
	
	ElemType x;
	ElemType e;
	cout<<"��������ڵ�һ��Ԫ�����ƣ�"; 
	cin>>e;
    int flag= SerchElem(L,e);
	if(flag<0){
		cout<<"��Ԫ�ز�����";
	}else{
		cout<<"��������Ҫ�����Ԫ��";
		cin>>x;
	InsertList(L,flag+1,x);//�±�ֵ��1Ϊ��� 
	}
}


//ɾ��˳����е�i��Ԫ��
void DeleteList(Sqlist &L, int i)
{
	int j;
	for(j=i; j<=L.length; j++) 
		L.elem[j-1]= L.elem[j];  //�Ӻ���ǰ��ֵ����ɾ��֮���Ԫ��������ǰ��
	--L.length;   //˳����ȼ�1 
} 

//��˳������ҵ����������Ԫ�ز�ɾ�� 
void DeleteList(Sqlist &L){
	ElemType t;
	cout<<"��������ڵ�һ��Ҫɾ����Ԫ�����ƣ�"; 
	cin>>t;
	int flag=SerchElem(L,t);//�ڱ����������Ԫ�ص��±�ֵ 
	if(flag<0){
		cout<<"��Ԫ�ز�����";
	}else{
	     DeleteList(L,flag+1);
	}
} 








typedef struct LNode{
	ElemType data;
	struct LNode   *next;
}LNode, *LinkList;

//������ĳ�ʼ��
void InitList(LinkList& L)
{
	//����һ���յĵ�����
	L = new LNode;
	L->next = NULL;
}
//������Ĵ���
void CreateList_H(LinkList& L)//ǰ�巨����������
{
	//����һ������Ϊn�ĵ�����L,����λ����
	int n;
	LNode* p;
	cout << "�����봴���ĵ������ȣ�" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		p = new LNode;
		cout << "���������ĵ�" << i + 1 << "������ֵ" << endl;
		cin >> p->data;
		p->next = L->next;
		L->next = p;
	}
}
 
void CreateList_R(LinkList& L)//��巨����������
{
	//����һ������Ϊn�ĵ�����L,����λ����
	int n;
	LNode* p, * r;
	r = L;//βָ��rָ��ͷ���
	cout << "�����봴���ĵ������ȣ�" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		p = new LNode;
		cout << "���������ĵ�" << i + 1 << "������ֵ" << endl;
		cin >> p->data;
		p->next = NULL;
		r->next = p;
		r = p;
	}
}

//������Ĳ��� 
bool ListInsert(LinkList& L, int i, ElemType e)
{
	//�ڴ�ͷ���ĵ�����L�ĵ�i�����ǰ�����½��
	LinkList p = L;
	LNode* s;
	int j = 0;
	while (p && j < i - 1)//pָ���i-1�����
	{
		p = p->next;
		j++;
	}
	if (!p || i < 1)//i���ڱ�+1��С��1������λ�ò��Ϸ�
	{
		return false;
	}
	s = new LNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}
 
//�������ɾ��
bool ListDelete(LinkList& L, int i, ElemType& e)
{
	//��������ĵ�i�����ɾ��
	LinkList p = L;
	LNode* q;
	int j = 0;
	while (p->next && j < i - 1)//pָ���i-1�����
	{
		p = p->next;
		j++;
	}
	if (!(p->next) || i < 1)//i���ڱ���С��1��ɾ��λ�ò��Ϸ�
	{
		return false;
	}
	q = p->next;//��ʱ���汻ɾ���ĵ�ַ�Ա��ͷ�
	p->next = q->next;
	e = q->data;//���汻ɾ��������
	delete q;//�ͷű�ɾ���Ŀռ�
	return true;
}
 
//�������ȡֵ
bool GetElem(LinkList L, int i, ElemType& e)
{
	//��ȡ�������е�i����������
	LinkList p = L;
	int j = 0;
	while (p->next && j < i - 1)//pָ���i-1�����
	{
		p = p->next;
		j++;
	}
	if (!(p->next) || i < 1)//i���ڱ���С��1����i����㲻����
	{
		return false;
	}
	e = p->next->data;//��ȡ��i����������
	return true;
}
 
//������Ĳ���
bool LocateElem(LinkList L, LNode*& p, ElemType e)
{
	//�ڵ������в��ҵ�һ������Ϊe�Ľ��
	p = L->next;//pָ����Ԫ���
	while (p && p->data != e)
	{
		p = p->next;
	}
	if (p)
	{
		return true;
	}
	return false;
}
 
//*********************************������Ļ������ܺ���******************************
 
//1������
void ListInsert(LinkList& L)
{
 
	ElemType e;
	int i;
	bool flag;
	cout << "������Ҫ��������ݣ�" << endl;
	cin >> e;
	cout << "������Ҫ�����λ�ã�" << endl;
	cin >> i;
	flag = ListInsert(L, i, e);
	if (flag)
		cout << "����ɹ�!" << endl;
	else
		cout << "λ�ò��ԣ�����ʧ�ܣ�" << endl;
}
 
//2��ɾ��
void ListDelete(LinkList& L)
{
	ElemType e;
	int i;
	bool flag;
	cout << "������Ҫɾ�����ݵ�λ�ã�" << endl;
	cin >> i;
	flag = ListDelete(L, i, e);
	if (flag)
		cout << "ɾ���ɹ���ɾ��������Ϊ��" << e << endl;
	else
		cout << "λ�ò��ԣ�ɾ��ʧ�ܣ�" << endl;
}
 
//3��ȡֵ
void GetElem(LinkList L)
{
	ElemType e;
	int i;
	bool flag;
	cout << "������Ҫ��ȡ���ݵ�λ�ã�" << endl;
	cin >> i;
	flag = GetElem(L, i, e);
	if (flag)
		cout << "��ȡ������Ϊ��" << e << endl;
	else
		cout << "λ�ò��ԣ���ȡ����ʧ�ܣ�" << endl;
}
 
//4������
void LocateElem(LinkList L)
{
	ElemType e;
	LNode* p = NULL;
	bool flag;
	cout << "������Ҫ���ҵ����ݣ�" << endl;
	cin >> e;
	flag = LocateElem(L, p, e);
	if (flag)
		cout << "���ҳɹ��������ݵĵ�ַΪ��" << p << endl;
	else
		cout << "����ʧ�ܣ�" << endl;
}
//5���п�
void ListEmpty(LinkList L)
{
	if (L->next)
		cout << "����Ϊ�գ�" << endl;
	else
		cout << "����Ϊ�գ�" << endl;
}
 
//6����
void ListLength(LinkList L)
{
	LinkList p = L->next;//pָ���һ�����
	int i = 0;
	while (p)//����������ͳ�ƽ����
	{
		i++;
		p = p->next;
	}
	cout << "����ĳ���Ϊ��" << i << endl;
}
 
//7�����
void ClearList(LinkList& L)
{
	LNode* p, * q;
	p = L->next;
	while (p)//����Ԫ��㿪ʼ������ɾ��
	{
		q = p->next;
		delete p;
		p = q;
	}
	L->next = NULL;//ͷ���ָ�����ÿ�
}
//8����ӡ 
void PrintsList(LinkList L)
{
	LinkList p = L->next;//pָ���һ�����
	int i = 0;
	while (p)//����������
	{
		i++;
		cout << "�����" << i << "������Ϊ��" << p->data << endl;
		p = p->next;
	}
}

void menu()
{
	cout << "***************************************************************************" << endl;
	cout << "***********************************1������*********************************" << endl;
	cout << "***********************************2��ɾ��*********************************" << endl;
	cout << "***********************************3��ȡֵ*********************************" << endl;
	cout << "***********************************4������*********************************" << endl;
	cout << "***********************************5���п�*********************************" << endl;
	cout << "***********************************6����*********************************" << endl;
	cout << "***********************************7�����*********************************" << endl;
	cout << "***********************************8����ӡ*********************************" << endl;
	cout << "***********************************9���˳�*********************************" << endl;
	cout << "***************************************************************************" << endl;
}

int main(){
	int select;
	Sqlist li;
	CreateList(li);
	PrintList(li);
	
	LinkList L;
	InitList(L);
    cout << "���ȴ���������1��ǰ�巨��  2����巨��" << endl;
    cin >> select;
        switch (select)
	{
	case 1://����
		CreateList_H(L);
		system("pause");
		break;
	case 2://ɾ��
		CreateList_R(L);
		system("pause");
		break;
	default:
		cout << "��������,����ʧ�ܣ�" << endl;
		system("pause");
		break;
	}
	
	
	
	while(1){
	cout<<"��ѡ����Ҫ���еĲ�����";
	cout<<"1����̬���벢����� 2����̬ɾ��������� 3����̬�����Ӧ������ǰ�棡";
	cout<<" 4����̬ɾ����Ӧ����! 5����ӡ! 6�����뵥���� 7���˳���"; 
	cin>>select;
		switch(select){
		case 1:
			InsertList(li,1,9);
			PrintList(li);
			break;
		case 2:
			DeleteList(li,1);
			PrintList(li);
			break;
		case 3:
			InsertList(li);
			PrintList(li);
			break;
		case 4:
			DeleteList(li);
			PrintList(li);
			break;
		case 5:
			PrintList(li);
			break;
		case 6:
		    while (1)
	{
		system("CLS");//��������
		menu();
		cout << "������˵���ţ�" << endl;
		cin >> select;
		switch (select)
		{
		case 1://����
			ListInsert(L);
			system("pause");//�����������
			break;
		case 2://ɾ��
			ListDelete(L);
			system("pause");
			break;
		case 3://ȡֵ
			GetElem(L);
			system("pause");
			break;
		case 4://����
			LocateElem(L);
			system("pause");
			break;
		case 5://�ж������Ƿ�Ϊ��
			ListEmpty(L);
			system("pause");
			break;
		case 6://������ĳ���
			ListLength(L);
			system("pause");
			break;
		case 7://���
			ClearList(L);
			system("pause");
			break;
		case 8://��ӡ
			PrintsList(L);
			system("pause");
			break;
		case 9:
			cout << "��ӭ�´�ʹ��!" << endl;//�˳�
			system("pause");
			return 0;
			break;
		default:
			cout << "�˵������������" << endl;
			system("pause");
			break;
		}
	}		
	break;
		case 7:
			cout << "��ӭ�´�ʹ��!" ;
			system("pause");//�����������
			return 0;
			break;
		default:
			cout << "�˵������������" ;
			system("pause");
			break;				
	}
}
	
	
	
	
	
	

	
}
