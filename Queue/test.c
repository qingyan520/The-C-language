//队列
//队列：只容许在一端进行插入数据操作，在
//另一端进行删除数据操作的特殊线性表，队列具有
//先进先出的FIFO(First In First Out)入队列
//进行插入操作的一端称为队尾，进行删除一端称为对头
//2.队列的实现
//队列可以用数组链表两种方式实现，使用链表更优一些
#include"queue.h"
void test01()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);
	printf("%d\n", QueueSize(&q));
	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
	printf("\n");
	printf("%d\n", QueueSize(&q));
}
int main()
{
	test01();
	return 0;
}