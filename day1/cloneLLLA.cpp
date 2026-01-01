Node *cloneLL(Node *head){
	Node* curr=head;
   
	while(curr) 
	{
		 Node* newnode = new Node(curr->data);
		 Node* nex = curr->next;
		 curr->next=newnode;
		 newnode->next=nex;
		 curr=nex;
		 if(nex)
		 nex=nex->next;
	}
	curr=head;
	while(curr) 
	{
		if(curr->random)
		{
			curr->next->random = curr->random->next;
		}
		curr=curr->next->next;
	}
	curr=head;
	Node* dummy = new Node(-1);
	dummy->next=head->next;
	Node *curr2=dummy->next;
	while(curr)   
	{
		curr->next=curr2->next;
		curr=curr->next;
		if(curr){
		curr2->next=curr->next;
		curr2=curr2->next;}
		
	}
	return dummy->next;  
}
