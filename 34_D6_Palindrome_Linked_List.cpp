class Solution {
public:
    //list is broken is this solution in end
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        //if elements in list are odd move slow one next
        if(fast!=NULL){
            slow=slow->next;
        }
        
        //reverse list
        ListNode *t=slow,*prev=NULL;
        while(t!=NULL){
            ListNode *tmp=t->next;
            t->next=prev;
            prev=t;
            t=tmp;
        }
        
        //check those lists we are use fast!=NULL to stop as
        //slow can have extra element if list is odd
        slow=head;
        fast=prev;
        while(fast!=NULL){
            if(slow->val!=fast->val)return false;
            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }
};






class Solution {
public:
    ListNode *tmp;
    
    bool check(ListNode *p){
        if(p==NULL)return true;
        bool ans=check(p->next)&(p->val==tmp->val);
        tmp=tmp->next;
        return ans;
    }
    bool isPalindrome(ListNode* head) {
        tmp=head;
        return check(head);
    }
};