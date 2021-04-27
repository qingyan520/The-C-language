//��������ʽ�ṹ��ʵ��
//1.�������ı�����
//��ν����������ĳ������·����һ�ζ�����ÿ���ڵ����һ�η���
//���ʽ�������Ĳ��������ھ����Ӧ�����⣬�����������Ƕ���������Ӧ�õĻ���
//�������ı�����ʽ��
//ǰ������������->������->������
//���������������->�����->������
//���������������->������->�����
//���磺
//         A
//     B              C
//   D     NULL     E        F
//NULL NULL       NULL  NULL   NULL  NULL
//��������������
//��ǰ�������A -��B-��D-��NULL-��NULL-��NULL-��C-��E-��NULL-��NULL-��F-��NULL-��NULL
//�����������NULL����D����NULL����B����NULL����A����NULL����E����NULL����C����NULL����F����NULL
//����������NULL����NULL����D����NULL����B����NULL����NULL����E����NULL����NULL����F����C����A
//����ʵ�֣�ʵ��ǰ�к������
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
	BTNode* BinaryTreeNode = malloc(sizeof(BTNode));
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
	//���������ֱ����±���
	BinaryTreeFind(root->left, x);
	BinaryTreeFind(root->right, x);
}

// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root)
{
}

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
	return 0;
}