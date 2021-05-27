#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

struct book{
    int bookid;
    char tittle[20];
    float price;
}b2;
///     book b2;  globally as same in above b2;
int main(){
/*  struct book{
    int bookid;
    char tittle[20];
    float price;
};*/  /// locally define ,,, access only in main().

 ///   struct book b1;    in c++ write struct is optional.
    book b1{173, "Lexcrop", 499.9};
    book b3;
    b3.bookid=45;
    b3.price = 6.6;
    strcpy(b3.tittle, "Brooklyn");   /// imp
    cout<<b1.bookid<<endl;
    /// we can copy b1 in b2, b3;
    b3 = b1;
    cout<<b3.bookid<<endl;
    return 0;
}
