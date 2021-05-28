/// Passing object;
#include<iostream>

using namespace std;

class Complex{
    int x; int y;
public:

    Complex(int a, int b){
        x = a;
        y = b;
    }

    Complex(Complex &c){  /// we have to pass by reference. because of recursion.
        x = c.x;
        y = c.y;
    }

    void showData(){
        cout<<x<<" + "<<y<<"i"<<endl;
    }

};

int main(){
    Complex c1(3,5);
    c1.showData();
    Complex c2 = c1;

    c2.showData();
    return 0;
}
