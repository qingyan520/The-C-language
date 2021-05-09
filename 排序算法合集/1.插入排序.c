//1.��������ֱ�Ӳ��������ϣ������

//(1)ֱ�Ӳ�������
//��ÿ��Ҫ��������ݺ�ǰ�������������бȽϣ���Ҫ��������ݵ��ʺϵ�λ��ȥ���������һ��
#include<stdio.h>
void InsertSort(int* arr, int n)
{
	//ѭ������Ϊ[0,end-2]���ɣ����һ��Ԫ���±�Ϊn-1�������䷶ΧΪ��һ��Ԫ�ص������ڶ���Ԫ�ط�Χ����
	for (int i = 0; i < n - 1; i++)
	{
		//����arr[i+1]��Ҫ��������ݣ���[0,end]��ǰ����������У���arr[i+1]����ǰ�����������
		int end = i;
		int temp = arr[i + 1];
		while (end >= 0)
		{
			//���ǰ��һ������Ҫ��������ݴ���ô�ͺ������Ԫ��
			if (arr[end] > temp)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			//ǰ��Ԫ�ز�����Ҫ����Ԫ�أ��˳�ѭ��
			else
			{
				break;
			}
		}
		//ѭ���˳��������
		//1.��end=-1ʱ����Ҫ�����Ԫ��Ϊ��СԪ��ʱ��end<0����ѭ������ʱend+1�պ�Ϊ��һ��Ԫ��λ�ã������ΪҪ�����Ԫ��
		//2.���Ҫ�����Ԫ�ر�ǰ��Ԫ�ش��˳�����ǰ��һ��Ԫ�ص���һ��Ԫ��ΪҪ�����Ԫ��
		arr[end + 1] = temp;
	}
}
void Print(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 2,8,7,6,9,3,1,10,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	InsertSort(arr, len);
	Print(arr, len);
	return 0;
}
//��������ʱ�临�Ӷ�O(N*N)
//����ǡ������ʱʱ�临�Ӷ�ΪO(N)
//
//
//(2)ϣ������
//Ϊ�˶Բ�����������Ż��������ϣ������
//������֮ǰ�ȶ��������Ԥ����ʹ�����þ������򣬼����������
//Ԥ����֮���ڽ���ֱ�Ӳ�������
//����
//���飺9  1  2  5  7  4  8  6  3  5
//���Ƕ���һ����gap����ÿgap������Ϊһ�飬���������У�����ʹgap=3
//����ʹarr[0],arr[0+gap](arr[3]),arr[0+gap+gap](arr[6]),arr[0+gap+gap+gap](arr[9])
//      9      5                  8                      5            ��һ������
//�ڶ��飺arr[1],arr[1+gap](arr[4]),arr[1+gap+gap](arr[7])
//       1       7                  6                                 �ڶ�������
//�����飺arr[2],arr[2+gap](arr[5]),arr[2+gap+gap](arr[8])      
//        2       4                 3                                 ����������
//����ʹ�������ݽ����ڲ�����ʹ����ÿ��С���ڳ�Ϊ��������
//   5   5    8          9
//   1   7    6
//   2   4    3
//  5  1  2   5  7   4   8  6  3   9
// ��������ǻᷢ������ֲ��ӽ�������
//Ȼ����ͬ���ķ�����gap=2����ʹ���������
//�����gap=1,���ǻᷢ�ֵ�gap==1ʱ������������֮ǰ��д�Ĳ��������𣬼�gap>1ʱ������Ԥ������gap==1��ʱ�����в�������
//����Ϊgap��󣬴���������ױ�Ų�����棬С���������ױ�Ų��ǰ��
//gapԽ�󣬴������С���������ױ�Ų����Ӧ�ķ���
//gapԽ��Խ���ӽ�����
//gapԽС��Խ��Ų����Ӧλ��
//gapԽС��Խ�ӽ�����
//gap==1ʱ���൱�ڲ�������
//����ʵ��
#include<stdio.h>
void Print(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void ShellSort(int* arr, int n)
{
	int gap=n;
	while (gap > 1)
	{
		gap =( gap / 3+ 1);
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int temp = arr[end + gap];
			while (end >= 0)
			{
				if (arr[end] > temp)
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = temp;;
		}
	
	}
}

int main()
{
	int arr[] = { 2,8,7,6,9,3,1,10,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	ShellSort(arr, len);
	Print(arr, len);
	return 0;
}