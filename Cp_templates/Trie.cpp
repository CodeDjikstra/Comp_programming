//This is a template for Trie data structure

#include <bits/stdc++.h>
using namespace std;

struct TrieNode{
    vector<TrieNode*> children=vector<TrieNode*>(26,NULL);
    bool isEndOfWord=false;

    void append(string& word){
        TrieNode* root = this;
        for(char c:word){
            if(root->children[c-'a']==NULL){
                root->children[c-'a']=new TrieNode();
            }
            root=root->children[c-'a'];
        }
    }

    bool find(string& word){
        TrieNode* root = this;
        for(char c:word){
            if(root->children[c-'a']==NULL){
                return false;
            }
            root=root->children[c-'a'];
        }
        return root->isEndOfWord;
    }
};