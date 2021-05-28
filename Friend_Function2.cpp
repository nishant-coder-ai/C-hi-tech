#include<iostream>

using namespace std;
class B;
class A{
    private:
        int a=9;

    public:

    friend void fun(A,B);
};

class B{
    private:
        int b=1;

    public:

    friend void fun(A,B);

};

void fun(A o1, B o2){
    /// here we can access private members of both classes at a time;
    cout<<"Sum is : "<<o1.a + o2.b<<endl;
}

int main(){
    A obj1;
    B obj2;
    fun(obj1, obj2);


    return 0;
}
