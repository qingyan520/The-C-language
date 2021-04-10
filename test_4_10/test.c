//*
//struct ListNode {
//    int val;
//    struct ListNode* next;
//    ListNode(int x) : val(x), next(NULL) {}
//}; */
//class Partition {
//public:
//    ListNode* partition(ListNode* pHead, int x) {
//        //思路：定义两个新节点，让小于X的值在前面那个链表中，让所有大于等于X·的值在
//        //另一个链表中，然后让两个链表连接到一起就行
//        //如果pHead为NULL，直接返回NULL
//        if (pHead == NULL)
//        {
//            return NULL;
//        }
//        //开辟大数头结点和小数头结点，让大小数据分开，然后在将大数连接在小数尾
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
//        //注意最后一位指向为空，即要保证大数的最后一位要指向为空
//        GreaterTail->next = NULL;
//        //小数据之后一位指向大数据头结点的下一位
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


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    //     //方法1：与合并两个有序数组类似，定义一个新的头结点，然后每次让val中较小值追加到头结点之后
    //     //1.首先判断l1,l2是否为空，如果l1为空，返回l2,l2为空返回l1
    //    if(l1==NULL)
    //    return l2;
    //    if(l2==NULL)
    //    return l1;
    //    struct ListNode*head,*tail;
    //    head=tail=NULL;
    //    //2.将较小值赋值给头结点，然后其自生指向下一个值
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
    //    //3.循环使每一个较小值追加到tail之后
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
    //        //每次追加之后让tail向后移动一位
    //        tail=tail->next;
    //    }
    //    //4.因为l1,l2大小不一样，所以可能导致l1或者l2先结束循环，循环结束后有剩余
    //    //循环结束之后判断是否有剩余，如果有剩余，则将剩余部分追加到结尾
    //    //这样就不用担心要使尾指针为空了，当在循环内解决完之后尾指针自然指向为NULL
    //    //要是有剩余，则连接的那部分自然有尾指针
    //    if(l1)
    //    {
    //        tail->next=l1;
    //    }
    //    if(l2)
    //    {
    //        tail->next=l2;
    //    }
    //    return head;
    //方法二：在第一种方法上略加升级：动态开辟一个头结点
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


