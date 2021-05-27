#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

struct book{
    private:
        int bookid;
        char tittle[20];
        float price;
    public:

        void input(){

        cout<<"Enter the Bookid, tittle, Price : "<<endl;
        cin>>bookid>>tittle>>price;
        if(bookid<0){
            bookid = -bookid;
            }

        }
        void display(){
        cout<<"\n Book id : "<<bookid<<" Tittle :"<<tittle<<" Price : "<<price<<endl;
        }
};


int main(){
    book b1;
    b1.input();
    /// if we do like this -67 will be asssigned to id. b1.bookid = -67;
    ///b1.bookid=-99; now it will generate error;
    b1.display();
    return 0;
}

