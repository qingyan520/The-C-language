//#include<stdio.h>
//#include<stdlib.h>
//typedef struct TreeNode
//{
//    struct TreeNode* left;
//    struct TreeNode* right;
//    char val;
//}TreeNode;
//TreeNode* CreatTree(char* str, int* i)
//{
//    if (str[*i] == '#')
//    {
//        (*i)++;
//        return NULL;
//    }
//    TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
//    if (root != NULL)
//    {
//        root->val = str[*i];
//        (*i)++;
//        root->left = CreatTree(str, i);
//        root->right = CreatTree(str, i);
//   }
// 
//    return root;
//}
//void InOrder(TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    InOrder(root->left);
//    printf("%c ", root->val);
//    InOrder(root->right);
//}
//int main()
//{
//    char str[16];
//    scanf_s("%s", str,sizeof(str));
//    int i = 0;
//    TreeNode* root = CreatTree(str, &i);
//    InOrder(root);
//    return 0;
//}



#include<stdio.h>
void InsertSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int temp = arr[i + 1];
		while (end > 0)
		{
			if (arr[i] > temp)
			{
				arr[i+1] = arr[i];
				arr[i] = temp;
				i--;
			}
			else
			{
				break;
			}
		}

	}
}
int main()
{
	int arr[] = { 1,2,9,10,5,7,3,4,3,2,5,1,6,7,9,8 };
	InsertSort(arr, sizeof(arr) / sizeof(arr[0]));
	return 0;
}