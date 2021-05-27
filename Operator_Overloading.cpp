#include<iostream>

using namespace std;

class Complex{
    int real;
    int imag;
    public:
        Complex(int r=0, int i= 0){
            real = r;
            imag = i;
        }
        Complex operator + (Complex  const &obj){
            Complex result;
            result.imag = imag + obj.imag;
            result.real = real + obj.real;
            return result;
        }

        void display(){
            cout<<real<< " + "<<imag<<"i"<<endl;
        }
};


int main(){
    Complex c1(12, 17);
    Complex c2(6, 7);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
