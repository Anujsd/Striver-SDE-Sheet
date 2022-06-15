class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ans=new ListNode(0,head);
        ListNode *first=ans,*second=ans;
        for(int i=0;i<=n;i++)
            first=first->next;
        while(first!=NULL){
            first=first->next;
            second=second->next;
        }
        second->next=second->next->next;
        return ans->next;
    }
};

