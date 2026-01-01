#include <bits/stdc++.h> 
TrieNode* solution::deleteWord(TrieNode* root, string word) {
  // base case
  if(word.length() == 0)
  {
    root->isEnd = false;
    return root;
  }


  int index = word[0] - 'a';
  if(root->children[index] != NULL)
    deleteWord(root->children[index],word.substr(1));
  return root;
}


