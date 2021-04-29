#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<iostream>
using namespace std;
typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;
BTNode* CreatBinaryTreeNode(BTDataType x)
{
	BTNode* BinaryTreeNode =(BTNode*) malloc(sizeof(BTNode));
	if (BinaryTreeNode != NULL)
	{
		BinaryTreeNode->data = x;
		BinaryTreeNode->left = NULL;
		BinaryTreeNode->right = NULL;
		return BinaryTreeNode;
	}
	else
	{
		printf("malloc fail!\n");
		exit(-1);
	}
}

//PS:ǰ���С������������֮��ı�����ֻ����printfλ�ò�ͬ��ǰ����ǰ�������ں��������м�
//ǰ�����
void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL->");
		return;
	}
	printf("%c->", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}
//�������
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL->");
		return;
	}
	InOrder(root->left);
	printf("%c->", root->data);
	InOrder(root->right);
}
//�������
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL->");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c->", root->data);
}



//�������Ĳ������
void LevelOrder(BTNode* root)
{
	queue<BTNode*>q;
	q.push(root);
	while (!q.empty())
	{
		BTNode* front = q.front();
		q.pop();
		printf("%c ", front->data);
		if (front->left)
		{
			q.push(front->left);
		}
		if (front->right)
		{
			q.push(front->right);
		}
	}

}

//���õݹ��������������
int TreeNodeSize(BTNode* root)
{
	//������Ϊ�գ�����0
	if (root == NULL)
	{
		return 0;
	}
	//��Ϊ�գ��������ڵ����+������������+1
	return TreeNodeSize(root->left) + TreeNodeSize(root->right) + 1;
}

//���õݹ��������Ҷ�ӽ��ĸ���
int BinaryTreeLeaf(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return BinaryTreeLeaf(root->left) + BinaryTreeLeaf(root->right);
}

//���õݹ�����������
//˼·��������������нϴ�ֵ��һ
int BinaryTreeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return fmax(BinaryTreeHeight(root->left), BinaryTreeHeight(root->right)) + 1;
}

// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL || k <= 0)
	{
		return 0;
	}
	if (root != NULL && k == 1)
	{
		return 1;
	}
	else
	{
		return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
	}
}

// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	//���Ϊ�գ�ֱ�ӷ���
	if (root == NULL)
	{
		return NULL;
	}
	//�������data==xֱ�ӷ��ظýڵ�
	if (root->data == x)
	{
		return root;
	}
	BTNode* temp = BinaryTreeFind(root->left, x);
	if (temp != NULL)
	{
		return temp;
	}
	BTNode* tem = BinaryTreeFind(root->right, x);
	if (tem != NULL)
	{
		return tem;
	}
	return NULL;
}

// �ж϶������Ƿ�����ȫ������
//int BinaryTreeComplete(BTNode* root)
//{
//}

int main()
{
	BTNode* A = CreatBinaryTreeNode('A');
	BTNode* B = CreatBinaryTreeNode('B');
	BTNode* C = CreatBinaryTreeNode('C');
	BTNode* D = CreatBinaryTreeNode('D');
	BTNode* E = CreatBinaryTreeNode('E');
	BTNode* F = CreatBinaryTreeNode('F');
	A->left = B;
	A->right = C;
	B->left = D;
	C->left = E;
	C->right = F;
	PrevOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");
	PostOrder(A);
	printf("\n");
	printf("%d\n", TreeNodeSize(A));
	printf("%d\n", TreeNodeSize(A));
	printf("%d\n", BinaryTreeLeaf(A));
	printf("%d\n", BinaryTreeHeight(A));
	printf("%d\n", BinaryTreeLevelKSize(A, 4));
	LevelOrder(A);
	return 0;
}