ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	int carry=0;
	ListNode *head=new ListNode(0);
	ListNode *ans=head;
	while(l1||l2||carry){
		int tmp=0;
		if(l1){
			tmp+=l1->val;
			l1=l1->next;
		}
		if(l2){
			tmp+=l2->val;
			l2=l2->next;
		}
		tmp+=carry;
	
		head->next=new ListNode(tmp%10);
		head=head->next;
		carry=tmp/10;
	}
	return ans->next;
}