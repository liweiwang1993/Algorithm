//合并链表
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1==NULL&&l2!=NULL)
        return l2;
    if(l1!=NULL&&l2==NULL)
        return l1;
    ListNode *p=new ListNode(0),*head=p,*head1=l1,*head2=l2;
    while(l1&&l2)
    {
        if(l1->val<=l2->val){
            p->next=new ListNode(l1->val);
            p=p->next;
            l1=l1->next;
        }else{
            p->next=new ListNode(l2->val);
            p=p->next;
            l2=l2->next;
        }
    }
    while(l1){
        p->next=new ListNode(l1->val);
        p=p->next;
        l1=l1->next;
    }
    while(l2){
        p->next=new ListNode(l2->val);
        p=p->next;
        l2=l2->next;
    }
    return head->next;
}
