#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};


void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);
    if(head==NULL){
            head=n;
            return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}


void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}


bool searchInData(Node* head, int key){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }return false;
}


void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){   /// here if we write temp->next!=NULL , then last no. not get printed;
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}

int main(){
    Node* head = NULL;
    insertAtTail(head, 5);
    insertAtTail(head, 8);
    insertAtTail(head, 55);
    insertAtTail(head, 45);
    display(head);
    insertAtHead(head, 89);
    display(head);
    insertAtHead(head, 23);
    display(head);
    if(searchInData(head, 55)){
        cout<<"55 is in data";
    }else{
        cout<<"55 is not in data";
    }
    return 0;

}
