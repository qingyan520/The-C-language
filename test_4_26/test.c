#include<stdio.h>
#include<stdlib.h>
typedef int BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;
BTNode* CreatBinaryTreeNode(BTDataType x)
{
	BTNode* Node = malloc(sizeof(BTNode));
	Node->data = x;
	Node->left = NULL;
	Node->right = NULL;
}
int main()
{

	return 0;
}