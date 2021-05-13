//利用栈来模拟实现快排的非递归实现
//我们先让左右区间入栈
//例如：
//0             9
//则出栈顺序为：9（right）     0（left）
//然后找到keyi1下标位置 ,然后让这三个元素分别入栈
//0     keyi1         9
//再出栈  9（right）    keyi1(left)
//再找到这两段位置的中间keyi，这时就会循环在右边的区间中使每一个数到合适的位置
//一直循环直到不能再插入元素，然后出栈，循环左边的序列

//
//#include<stdio.h>
//#include<stack>
//using namespace std;
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int PastSort(int* arr, int left, int right)
//{
//	int keyi = left;
//	while (left < right)
//	{
//		while (left < right && arr[right] >= arr[keyi])
//		{
//			right--;
//		}
//		while (left < right && arr[left] <= arr[keyi])
//		{
//			left++;
//		}
//		Swap(&arr[left], &arr[right]);
//	}
//	Swap(&arr[keyi], &arr[left]);
//	return left;
//}
//void QuickSort(int* arr, int begin,int end)
//{
//	stack<int> st;
//	st.push(begin);
//	st.push(end);
//	while (!st.empty())
//	{
//		int left;
//		int right;
//		right = st.top();
//		st.pop();
//		left = st.top();
//		st.pop();
//		int keyi=PastSort(arr, left, right);
//		if (left < keyi - 1)
//		{
//			st.push(left);
//			st.push(keyi - 1);
//		}
//		if (right > keyi + 1)
//		{
//			st.push(keyi + 1);
//			st.push(right);
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 7,10,2,4,5,3,6,9,8,1 };
//	QuickSort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

