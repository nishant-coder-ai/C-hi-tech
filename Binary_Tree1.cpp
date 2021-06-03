/// Binary Search Tree
#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val){
            data = val;
            left = NULL;
            right = NULL;
    }
};

int main(){
    struct Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(8);
    root->right->left = new Node(6);
    /**
                     5
                   /   \
                  3     7
                 / \   / \
                1  4   6  8
    **/


    return 0;
}
