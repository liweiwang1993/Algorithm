
//链表中删除最后一个节点
typedef struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
}ListNode;
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *p1=head,*p2=p1;
    int i=0;
    while(i<n){
        p2=p2->next;
        if(p2==NULL)
            return head->next;
        i++;
    }
    while(p2->next)
    {
        p1=p1->next;
        p2=p2->next;
    }
    p1->next=p1->next->next;
    return head;
}
