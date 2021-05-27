#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

struct book{
    int bookid;
    char tittle[20];
    float price;
}b2;
int main(){
    book b1;
    cout<<"Enter the Bookid, tittle, Price : "<<endl;
    cin>>b1.bookid>>b1.tittle>>b1.price;

    return 0;
}

