//1.插入排序：直接插入排序和希尔排序

//(1)直接插入排序
//让每次要插入的数据和前面的有序数组进行比较，让要插入的数据到适合的位置去，就像打牌一样
#include<stdio.h>
void InsertSort(int* arr, int n)
{
	//循环区间为[0,end-2]即可，最后一个元素下表为n-1，即区间范围为第一个元素到倒数第二个元素范围即可
	for (int i = 0; i < n - 1; i++)
	{
		//假设arr[i+1]是要插入的数据，而[0,end]是前面的有序数列，将arr[i+1]插入前面的有序数列
		int end = i;
		int temp = arr[i + 1];
		while (end >= 0)
		{
			//如果前面一个数比要插入的数据大，那么就后移这个元素
			if (arr[end] > temp)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			//前面元素不大于要插入元素，退出循环
			else
			{
				break;
			}
		}
		//循环退出的情况：
		//1.当end=-1时，即要插入的元素为最小元素时，end<0结束循环，此时end+1刚好为第一个元素位置，让其称为要插入的元素
		//2.如果要插入的元素比前面元素大，退出，让前面一个元素的下一个元素为要插入的元素
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
//插入排序时间复杂度O(N*N)
//当其恰好有序时时间复杂度为O(N)
//
//
//(2)希尔排序
//为了对插入排序进行优化，提出了希尔排序
//在排序之前先对数组进行预处理，使数组变得尽量有序，减少排序次数
//预处理之后在进行直接插入排序
//例：
//数组：9  1  2  5  7  4  8  6  3  5
//我们定义一个数gap，将每gap个数分为一组，例在这组中，我们使gap=3
//我们使arr[0],arr[0+gap](arr[3]),arr[0+gap+gap](arr[6]),arr[0+gap+gap+gap](arr[9])
//      9      5                  8                      5            第一组数据
//第二组：arr[1],arr[1+gap](arr[4]),arr[1+gap+gap](arr[7])
//       1       7                  6                                 第二组数据
//第三组：arr[2],arr[2+gap](arr[5]),arr[2+gap+gap](arr[8])      
//        2       4                 3                                 第三组数据
//我们使三组数据进行内部排序，使其在每个小组内成为有序序列
//   5   5    8          9
//   1   7    6
//   2   4    3
//  5  1  2   5  7   4   8  6  3   9
// 排序后我们会发现数组局部接近于有序
//然后按照同样的方法让gap=2，在使其进行排序
//最后另gap=1,我们会发现当gap==1时，不就是我们之前都写的插入排序吗，即gap>1时，进行预处理，当gap==1，时，进行插入排序
//当分为gap组后，大的数更容易被挪到后面，小的数更容易被挪到前面
//gap越大，大的数和小的数更容易被挪到对应的方向
//gap越大，越不接近有序
//gap越小，越快挪到对应位置
//gap越小，越接近有序
//gap==1时，相当于插入排序
//代码实现
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