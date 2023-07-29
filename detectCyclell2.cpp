bool detectCycle(Node *head)
{
	Node *slow=head;
    Node *fast=head;
    if(head==NULL)return false;
    while(fast->next and fast->next->next){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)return true;
    }
    return false;
}
