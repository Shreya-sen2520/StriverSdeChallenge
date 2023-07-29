Node* removeKthNode(Node* head, int k)
{
    Node* st = new Node();
    st->next=head;
    Node* slow=st;
    Node* fast=st;
    for(int i=1;i<=k;i++){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    return st->next;

}
