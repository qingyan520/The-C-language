//*
//struct ListNode {
//    int val;
//    struct ListNode* next;
//    ListNode(int x) : val(x), next(NULL) {}
//}; */
//class Partition {
//public:
//    ListNode* partition(ListNode* pHead, int x) {
//        //˼·�����������½ڵ㣬��С��X��ֵ��ǰ���Ǹ������У������д��ڵ���X����ֵ��
//        //��һ�������У�Ȼ���������������ӵ�һ�����
//        //���pHeadΪNULL��ֱ�ӷ���NULL
//        if (pHead == NULL)
//        {
//            return NULL;
//        }
//        //���ٴ���ͷ����С��ͷ��㣬�ô�С���ݷֿ���Ȼ���ڽ�����������С��β
//        struct ListNode* LessHead, * LessTail, * GreaterHead, * GreaterTail;
//        LessHead = LessTail = (struct ListNode*)malloc(sizeof(struct ListNode));
//        GreaterHead = GreaterTail = (struct ListNode*)malloc(sizeof(struct ListNode));
//        struct ListNode* cur = pHead;
//        while (cur)
//        {
//            if (cur->val < x)
//            {
//                LessTail->next = cur;
//                LessTail = LessTail->next;
//            }
//            else
//            {
//                GreaterTail->next = cur;
//                GreaterTail = GreaterTail->next;
//            }
//            cur = cur->next;
//        }
//        //ע�����һλָ��Ϊ�գ���Ҫ��֤���������һλҪָ��Ϊ��
//        GreaterTail->next = NULL;
//        //С����֮��һλָ�������ͷ������һλ
//        LessTail->next = GreaterHead->next;
//        return LessHead->next;
//
//    }
//};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    //     //����1����ϲ����������������ƣ�����һ���µ�ͷ��㣬Ȼ��ÿ����val�н�Сֵ׷�ӵ�ͷ���֮��
    //     //1.�����ж�l1,l2�Ƿ�Ϊ�գ����l1Ϊ�գ�����l2,l2Ϊ�շ���l1
    //    if(l1==NULL)
    //    return l2;
    //    if(l2==NULL)
    //    return l1;
    //    struct ListNode*head,*tail;
    //    head=tail=NULL;
    //    //2.����Сֵ��ֵ��ͷ��㣬Ȼ��������ָ����һ��ֵ
    //    if(l1->val<l2->val)
    //    {
    //        head=tail=l1;
    //        l1=l1->next;
    //    }
    //    else
    //    {
    //        head=tail=l2;
    //        l2=l2->next;
    //    }
    //    //3.ѭ��ʹÿһ����Сֵ׷�ӵ�tail֮��
    //    while(l1&&l2)
    //    {
    //        if(l1->val<l2->val)
    //        {
    //            tail->next=l1;
    //            l1=l1->next;
    //        }
    //        else
    //        {
    //            tail->next=l2;
    //            l2=l2->next;
    //        }
    //        //ÿ��׷��֮����tail����ƶ�һλ
    //        tail=tail->next;
    //    }
    //    //4.��Ϊl1,l2��С��һ�������Կ��ܵ���l1����l2�Ƚ���ѭ����ѭ����������ʣ��
    //    //ѭ������֮���ж��Ƿ���ʣ�࣬�����ʣ�࣬��ʣ�ಿ��׷�ӵ���β
    //    //�����Ͳ��õ���Ҫʹβָ��Ϊ���ˣ�����ѭ���ڽ����֮��βָ����Ȼָ��ΪNULL
    //    //Ҫ����ʣ�࣬�����ӵ��ǲ�����Ȼ��βָ��
    //    if(l1)
    //    {
    //        tail->next=l1;
    //    }
    //    if(l2)
    //    {
    //        tail->next=l2;
    //    }
    //    return head;
    //���������ڵ�һ�ַ������Լ���������̬����һ��ͷ���
//    struct ListNode* head, * tail;
//    head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
//    head->next = tail->next = NULL;
//    while (l1 && l2)
//    {
//        if (l1->val < l2->val)
//        {
//            tail->next = l1;
//            l1 = l1->next;
//        }
//        else
//        {
//            tail->next = l2;
//            l2 = l2->next;
//        }
//        tail = tail->next;
//    }
//    if (l1)
//    {
//        tail->next = l1;
//    }
//    if (l2)
//    {
//        tail->next = l2;
//    }
//    struct ListNode* phead = head->next;
//    free(head);
//    return phead;
//
//}


//����ƽ���е����������� ������֮��ľ���
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
    int main()
    {
        double x1, x2, y1, y2;
        scanf_s("(%lf,%lf)\n", &x1, &y1);
        scanf_s("(%lf,%lf)", &x2, &y2);
        int b, c;
        int a = (b = 4) + (c = 6);
        double s = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        //�������빫ʽ
        printf("%lf\n", s);
        system("pause");
        return 0;
    }