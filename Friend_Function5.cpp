#include<iostream>

using namespace std;

class A{
public:
    void name(){
    /// -----------
    }

};

class B{
public:
    /// if we want to make name member function as friend of B class -->
    friend void A :: name();

    /// if you want make all member function of class A is friend of class B;
    friend class A:
};

int main(){

    return 0;
}
