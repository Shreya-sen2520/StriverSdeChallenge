Node* findIntersection(Node *firstHead, Node *secondHead)
{
    if(firstHead==NULL || secondHead==NULL)
   {
       return NULL;
   }
     Node* d1=firstHead;
     Node* d2=secondHead;

     while(d1!=d2)
     {
         d1=d1==NULL?secondHead:d1->next;
         d2=d2==NULL?firstHead:d2->next;
     }
     return d1;
}

