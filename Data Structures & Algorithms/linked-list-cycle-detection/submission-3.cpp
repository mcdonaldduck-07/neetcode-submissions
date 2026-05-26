class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)return false;
        struct ListNode*t1=head,*t2=head;
        while(t1!=NULL && t1->next!=NULL){
            t1=t1->next->next;
            t2=t2->next;
            if(t1==t2)return true;
        }
        return false;
    }
};