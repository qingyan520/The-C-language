//����
//���У�ֻ������һ�˽��в������ݲ�������
//��һ�˽���ɾ�����ݲ������������Ա����о���
//�Ƚ��ȳ���FIFO(First In First Out)�����
//���в��������һ�˳�Ϊ��β������ɾ��һ�˳�Ϊ��ͷ
//2.���е�ʵ��
//���п����������������ַ�ʽʵ�֣�ʹ���������һЩ
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