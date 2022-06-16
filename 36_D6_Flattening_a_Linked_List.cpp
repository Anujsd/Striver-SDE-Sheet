Node* merge(Node* a,Node *b){
    Node *tmp=new Node(-1);
    Node *ans=tmp;
    while(a!=NULL&&b!=NULL){
        if(a->data<b->data){
            tmp->bottom=a;
            a=a->bottom;
        }else{
            tmp->bottom=b;
            b=b->bottom;
        }
        tmp=tmp->bottom;
    }
    if(a==NULL)tmp->bottom=b;
    else tmp->bottom=a;
    
    return ans->bottom;
}    

Node *flatten(Node *root)
{
    if(root==NULL||root->next==NULL)
        return root;
        
    root->next=flatten(root->next);
    
    root=merge(root,root->next);
    
    return root;
}

