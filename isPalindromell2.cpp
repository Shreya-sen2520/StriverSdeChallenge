#include <bits/stdc++.h> 
bool isPalindrome(LinkedListNode<int> *head) {

    vector<int>arr;
    while(head!=NULL)
    {
        arr.push_back(head->data);
        head=head->next;
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=arr[arr.size()-i-1])return false;
    }

    return true;
}
