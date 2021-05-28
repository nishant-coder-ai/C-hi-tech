/// this is a keyword;
/// it is local object pointer;
/// this pointer can not be modify;
/// it it in instance member function;
/// it is used to refer caller object in member function;
/// it collects address of caller object;
/// it is used in name conflict;
#include<iostream>

using namespace std;

class Nana{
    private:
        int x, y, z;

    public:
        void setData(int x, int y, int z){
            this->x = x;
            this->y = y;
            this->z = z;
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
