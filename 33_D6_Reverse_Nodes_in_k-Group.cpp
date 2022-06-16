class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *dummy=new ListNode(-1,head);
        ListNode *t=head;
        ListNode *start=dummy;
        int cnt=0;
        while(t!=NULL){
            cnt++;
            ListNode *nxt=t->next;
            if(cnt%k==0){
                ListNode *prev=start;
                ListNode *curr=start->next;
                ListNode *end=t->next;
                ListNode *first=curr;
                while(curr!=end){
                    ListNode *tmp=curr->next;
                    curr->next=prev;
                    prev=curr;
                    curr=tmp;
                }
                first->next=curr;
                start->next=prev;
                start=first;
            }
            t=nxt;
        }
        return dummy->next;
    }
};

