class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head||head->next==NULL)return head;
        
        ListNode *pre=NULL,*cur=head;
        while(cur!=NULL){
            ListNode *tmp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=tmp;
        }
        return pre;
    }
};

