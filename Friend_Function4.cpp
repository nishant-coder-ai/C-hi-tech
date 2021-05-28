#include<iostream>

using namespace std;

class Complex{
    private:
        int a;
        int b;
    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }
        void showData(){
            cout<<a<<" +"<<b<<"i"<<endl;
        }

        friend ostream& operator <<(ostream&, Complex);  /// we can not create object of ostream and istream  , so we make refrence.
        friend istream& operator >>(istream&, Complex&);
};

ostream& operator <<(ostream &dout, Complex c){
    cout<<"\n a : "<<c.a<<" , b : "<<c.b<<endl;
    return dout;
}

istream& operator >>(istream &din, Complex &c){/// here we take refrence of Complex cause, we have to change in arguments.
    cin>>c.a>>c.b;
    return din;
}

int main(){
    Complex c1, c2, c3;
    cout<<"Enter the Complex Number real and Imag Part : "<<endl;
    cin>>c1;

    cout<<"You have Entered : "<<endl;
    cout<<c1;    /// normally : c1.operator <<(); unary, but we are using friend so ->  operator <<(c1); or operator <<(cout, c1);

    return 0;
}
