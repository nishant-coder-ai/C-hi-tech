#include<iostream>

using namespace std;

class Complex{
    private:
        int x;
        int y;
    public:
        void setData(int n1, int n2){
            x = n1;
            y = n2;
        }

        void showAns(){
            cout<<x<<" + "<<y<<"i"<<endl;
        }

        friend Complex operator +(Complex, Complex);
};


Complex operator +(Complex h1, Complex h2){
    Complex temp;
    temp.x = h1.x + h1.y;
    temp.y = h2.x + h2.y;
    return temp;

}


int main(){
    Complex c1, c2 ,c3;
    c1.setData(3, 5);
    c1.showAns();
    c2.setData(5, 1);
    c2.showAns();
    c3 = c1 + c2;    /// here + operator(c1, c2);
    c3.showAns();
    return 0;
}
