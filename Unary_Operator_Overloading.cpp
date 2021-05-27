#include<iostream>

using namespace std;

class Complex{
    private:
        int b;
        int a;
    public:
        void setData(int i, int r){
            b = i;
            a = r;
        }

        Complex operator-(){   /// Complex operator +(Complex c);
            Complex temp;
            temp.b = -b ;
            temp.a = -a ;
            return temp;
        }

        void showData(){
            cout<<"a : "<<a<<" b : "<<b<<endl;
        }

};


int main(){
    Complex c1, c2;
    c1.setData(3,5);

    c2 = -c1;           /// c1.operator -(); with no arguments.
    c2.showData();
    return 0;
}

