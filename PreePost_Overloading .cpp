#include<iostream>

using namespace std;

class Integer{
    int x;
public:
    void setData(int a){
        x = a;
    }
    void showData(){
        cout<<"x : "<<x<<endl;
    }

    Integer operator ++(){   /// preincrement;
        Integer j;
        j.x = ++x;

        return j;
    }

    Integer operator ++(int){   /// postincrement;
        Integer j;
        j.x = x++;

        return j;
    }


};

int main(){
    Integer i1, i2;
    i1.setData(5);
    i1.showData();
    i2 = ++i1;         /// i2 = i1.operator ++();
    i1.showData();
    i2.showData();


    return 0;
}
