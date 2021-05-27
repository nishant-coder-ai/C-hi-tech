#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

struct book{
    int bookid;
    char tittle[20];
    float price;

    void input(){

    cout<<"Enter the Bookid, tittle, Price : "<<endl;
    cin>>bookid>>tittle>>price;

}
    void display(){
    cout<<"\n Book id : "<<bookid<<" Tittle :"<<tittle<<" Price : "<<price<<endl;
}
};


int main(){
    book b1;
    b1.input();
    b1.display();
    return 0;
}

