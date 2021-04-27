//二叉树链式结构的实现
//1.二叉树的遍历：
//所谓遍历是沿着某条搜索路径，一次对树中每个节点均做一次访问
//访问结点所做的操作依赖于具体的应用问题，遍历二叉树是二叉树其他应用的基础
//二叉树的遍历方式：
//前序遍历：根结点->左子树->右子树
//中序遍历：左子树->根结点->右子树
//后序遍历：左子树->右子树->根结点
//例如：
//         A
//     B              C
//   D     NULL     E        F
//NULL NULL       NULL  NULL   NULL  NULL
//例如有上述子树
//其前序遍历：A -》B-》D-》NULL-》NULL-》NULL-》C-》E-》NULL-》NULL-》F-》NULL-》NULL
//其中序遍历：NULL－》D－》NULL－》B－》NULL－》A－》NULL－》E－》NULL－》C－》NULL－》F－》NULL
//其后序遍历：NULL－》NULL－》D－》NULL－》B－》NULL－》NULL－》E－》NULL－》NULL－》F－》C－》A
//代码实现：实现前中后遍历：
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

//PS:前、中、后、序遍历代码之间的遍历就只在于printf位置不同，前序在前，后续在后，中序在中间
//前序遍历
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
//中序遍历
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
//后序遍历
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

//利用递归求二叉树结点个数
int TreeNodeSize(BTNode* root)
{
	//如果结点为空，返回0
	if (root == NULL)
	{
		return 0;
	}
	//不为空：左子树节点个数+右子树结点个数+1
	return TreeNodeSize(root->left) + TreeNodeSize(root->right) + 1;
}

//利用递归求二叉树叶子结点的个数
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

//利用递归求二叉树深度
//思路：求出左右子树中较大值加一
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

// 二叉树第k层节点个数
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

// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	//结点为空，直接返回
	if (root == NULL)
	{
		return NULL;
	}
	//如果结点的data==x直接返回该节点
	if (root->data == x)
	{
		return root;
	}
	//左右子树分别向下遍历
	BinaryTreeFind(root->left, x);
	BinaryTreeFind(root->right, x);
}

// 判断二叉树是否是完全二叉树
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