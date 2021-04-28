//�������Ĵ�����ϰ
//1.�������������
#include<stdio.h>
#include<stdlib.h>
typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;

}BTNode;
BTNode* CreatBinaryTreeNode(BTDataType x)
{
	BTNode* BinaryNode = (BTNode*)malloc(sizeof(BTNode));
	if (BinaryNode != NULL)
	{
		BinaryNode->data = x;
		BinaryNode->left = NULL;
		BinaryNode->right = NULL;
	}
	else
	{
		printf("malloc fail\n");
		exit(-1);
	}
}


//�������ı�����ǰ�к������,����ʵ��ǰ���ӡ
void FrontPrint(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->data);
	FrontPrint(root->left);
	FrontPrint(root->right);
}


//�������������
int BTNodeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return BTNodeSize(root->left) + BTNodeSize(root->right) + 1;
}

//���������Ҷ�ӽ�����
int BTNodeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return BTNodeLeafSize(root->left) + BTNodeLeafSize(root->right);
}


//����������
int BTNodeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return fmax(BTNodeHeight(root->left), BTNodeHeight(root->right)) + 1;
}



//���õݹ����������k�������
int BinaryTreeKSize(BTNode* root, int k)
{
	if (root == NULL || k <= 0)
	{
		return 0;
	}
	if (root != NULL && k == 1)
	{
		return 1;
	}
	return BinaryTreeKSize(root->left, k - 1) + BinaryTreeKSize(root->right, k - 1);
}


//Ѱ��ָ�����
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == x)
	{
		return root;
	}
	BinaryTreeFind(root->left,x);
	BinaryTreeFind(root->right,x);
}

int main()
{
	return 0;
}