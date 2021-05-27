#include<iostream>

using namespace std;

class Complex{
    private:
        int imag;
        int real;
    public:
        void setData(int i, int r){
            imag = i;
            real = r;
        }

        Complex add(Complex c){   /// Complex operator +(Complex c);
            Complex temp;
            temp.imag = imag + c.imag;
            temp.real = real + c.real;
            return temp;
        }

        void showData(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }

};


int main(){
    Complex c1, c2, c3;
    c1.setData(3,5);
    c2.setData(5,2);
    c3 = c1.add(c2);    /// c1 + c2;  or c1.operator +(c2);
    c3.showData();
    return 0;
}
