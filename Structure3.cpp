#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

struct book{
    int bookid;
    char tittle[20];
    float price;
}b2;

book input(){
    book b;
    cout<<"Enter the Bookid, tittle, Price : "<<endl;
    cin>>b.bookid>>b.tittle>>b.price;
    return b;
}

void display(book b){
    cout<<"\n Book id : "<<b.bookid<<" Tittle :"<<b.tittle<<" Price : "<<b.price<<endl;
}

int main(){
    book b1;
    b1=input();
    display(b1);
    return 0;
}

