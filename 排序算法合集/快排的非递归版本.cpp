//����ջ��ģ��ʵ�ֿ��ŵķǵݹ�ʵ��
//������������������ջ
//���磺
//0             9
//���ջ˳��Ϊ��9��right��     0��left��
//Ȼ���ҵ�keyi1�±�λ�� ,Ȼ����������Ԫ�طֱ���ջ
//0     keyi1         9
//�ٳ�ջ  9��right��    keyi1(left)
//���ҵ�������λ�õ��м�keyi����ʱ�ͻ�ѭ�����ұߵ�������ʹÿһ���������ʵ�λ��
//һֱѭ��ֱ�������ٲ���Ԫ�أ�Ȼ���ջ��ѭ����ߵ�����


#include<stdio.h>
#include<stack>
using namespace std;
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int PastSort(int* arr, int left, int right)
{
	int keyi = left;
	while (left < right)
	{
		while (left < right && arr[right] >= arr[keyi])
		{
			right--;
		}
		while (left < right && arr[left] <= arr[keyi])
		{
			left++;
		}
		Swap(&arr[left], &arr[right]);
	}
	Swap(&arr[keyi], &arr[left]);
	return left;
}
void QuickSort(int* arr, int begin,int end)
{
	stack<int> st;
	st.push(begin);
	st.push(end);
	while (!st.empty())
	{
		int left;
		int right;
		right = st.top();
		st.pop();
		left = st.top();
		st.pop();
		int keyi=PastSort(arr, left, right);
		if (left < keyi - 1)
		{
			st.push(left);
			st.push(keyi - 1);
		}
		if (right > keyi + 1)
		{
			st.push(keyi + 1);
			st.push(right);
		}
	}

}
int main()
{
	int arr[] = { 7,10,2,4,5,3,6,9,8,1 };
	QuickSort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
}