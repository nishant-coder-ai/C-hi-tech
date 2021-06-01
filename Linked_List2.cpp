#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

/// head contains address of the first Node.
void insertAtHead(Node* &head, int val){
    Node* n= new Node(val);
    n->next = head;

    head=n;
}

void insertAtTail(Node* &head, int val){

    Node* n= new Node(val);  /// created new node n;
    if(head==NULL){          /// check if the new node is empty , if empty then header pointer will point to new node;
        head  = n;
        return;

    }


    Node* temp=head;
    while(temp->next != NULL){
        temp= temp->next;
    }
    temp->next =n;

}


void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
   }
cout<<" NULL "<<endl;
}


void deletion(Node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteHead(head);
        return;
    }

    Node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;  /// here if we don't delete then memory liked.

}


void deleteHead(Node* &head){
    Node* todelete = head;
    head = head->next;

    delete todelete;
}


bool searchData(Node* head, int key){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 8);
    display(head);
    cout<<searchData(head, 4)<<endl;
    deletion(head, 2);
    display(head);
    insertAtTail(head, 89);
    insertAtTail(head, 25);
    insertAtTail(head, 32);
    insertAtHead(head, 55);
    insertAtHead(head, 48);
    display(head);
    deleteHead(head);
    display(head);
    return 0;
}

