//#include<stdio.h>
//int main()
//{
//	char c1, c2;
//	c1 = 97;
//	c2 = 98;
//	printf("%c %c\n", c1, c2);
//	printf("%d %d\n", c1, c2);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a, b;
//	float x, y;
//	char c1, c2;
//	scanf_s("%d %d", &a, &b);
//	scanf_s("%f %f", &x, &y);
//	scanf_s("%c%c", &c1, &c2);
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int i, j, m, n;
//	i = 8;
//	j = 10;
//	m = ++i;
//	n = j++;
//	printf("i=%d j=%d m=%d n=%d\n", i, j, m, n);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 8;
//	int j = 10;
//	printf("i=%d j=%d", i++, j++);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 8;
//	int j = 10;
//	printf("i=%d j=%d", ++i, ++j);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int i, j, m = 0, n = 0;
	i = 8;
	j = 10;
	m += i++;//m=m+i++;,m=8
	n -= --j;//n=n-(--j),n=-9
	printf("i=%d j=%d m=%d n=%d\n", i, j, m, n);
	return 0;
}
//
//

//动态内存管理
