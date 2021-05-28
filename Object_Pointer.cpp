#include<iostream>

using namespace std;

class Nana{
    private:
        int x, y, z;

    public:
        void setData(int a, int b, int c){
            x = a;
            y = b;
            z = c;
        }


        void showData(){
            cout<<"x : "<<x<<" , y : "<<y<<" , z : "<<z<<endl;
        }


};

int main(){
    Nana n1;
    n1.setData(54, 56, 11);
    n1.showData();
    Nana *ptr;
    ptr = &n1;
    ptr->setData(9, 9, 9);
    ptr->showData();

    return 0;
}
