#include<iostream>

using namespace std;

class name{
private:
    int balance;  /// this is instance member variable
    static int jem; /// static member variable or class variable.

public:
    void setBalance(int b ){
    balance = b;
    }


    /// to access private jem:
    static void setJem(int r){  /// static member function
        /// as it is static it can only access static member;
        /// this function can call without objects;
        jem =r;
    }

};

int name :: jem = 89; /// it must be defined outside of class.
/// jem doesn't affect object;
/// its like when three objects are created of class ma, then three balance variable are created,
/// but only one jem will be created .infact when the object is not created then also jem will be created,


int main(){
    /// by default static variable value is 0;
    static int x;  /// x allocate memory by just start of program ,

    int y;  /// y gets memory when main started.
    name c1, c2;
    /// when jem is public-->  name::jem=89;
    name::setJem(98);

    return 0;
}
