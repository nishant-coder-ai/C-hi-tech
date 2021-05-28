#include<iostream>

using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }

        void showData(){
            cout<<"a : "<<a<<" , b : "<<b<<endl;
        }

        friend void fun(Complex);
};

void fun(Complex c){
    cout<<"This is friend Function "<<endl;
     cout<<"a : "<<c.a<<" , b : "<<c.b<<endl;
}

int main(){
    Complex c1, c2, c3;
    c1.setData(2, 5);
    c1.showData();
    fun(c1);
    return 0;
}
