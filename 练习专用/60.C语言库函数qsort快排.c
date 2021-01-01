#include<stdio.h>
#include<stdlib.h>
//自定义一个compare函数，其返回值为int(无论比较那个类型的其返回值类型都是int)，后面传两个(void*a)(void*b)类型的指针
int compare(void* a, void* b)
{
	return *(int*)a - *(int*)b;
	//(int*)a表示将a的类型强转成整形地址类型
	//*(int*)a就是目标地址的值
	//若返回值后面的相减顺序和函数定义顺序一致，则为升序排列，反之则为降序排列
	//如(void*a,void*b)   后面return *(int*)a-*(int*)b则为升序排列
	//而(void*a,void*b)   后面return *(int*)b-*(int*)a则为降序排列
}
int main60()
{
	//创建一个数组并为其赋值
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	qsort(arr, 10, sizeof(int), compare);
	//qsort函数是C语言库函数中的一种，其在stdlib.h下
	// void qsort(void *base, size_t nitems, size_t size, int (*compare)(const void *, const void*))
	//它里面含有4个参数，第一个是所要排序的数组地址，即数组名，第二个是素组大小，第三个是每个元素所占的空间，第四个是一个自定义函数coompare(一般大家都这样写)
	//打印排列好的数组
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}