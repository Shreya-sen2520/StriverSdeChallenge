#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

Node *getMid(Node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL) return head;
    if(head->next->next==NULL) return head->next;
    Node *slow=head;
    Node *fast =head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL) 
        {
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}
Node *findMiddle(Node *head) {

   return getMid(head);
}
