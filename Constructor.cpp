#include<iostream>
#include<string>
using namespace std;

class Mobile{
    private:
        string name;
        int price;
        int ram;
        string processor;

    public:
        Mobile(){
            cout<<"Default Constructor "<<endl;
        }

        Mobile(string n, int p, int r, string pr){
            cout<<"Parameterized Constructor"<<endl;
            name = n;
            price = p;
            ram = r;
            processor = pr;
        }
        Mobile(Mobile &m1){
            cout<<"Copy Constructor"<<endl;
            name = m1.name;
            price = m1.price;
            ram = m1.ram;
            processor = m1.processor;
        }

        bool operator == (Mobile &m1){     /// operator overloading
            if(name==m1.name && price==m1.price && ram==m1.ram && processor==m1.processor){
                return true;
            }
            return false;
        }

        ~Mobile(){
            cout<<"Destructor called"<<endl;
        }
};

int main(){
    Mobile m1("Note_5_pro", 15000, 4, "Qualcoulm_Snapdragon");
    Mobile m2;
    Mobile m3(m1); ///  or m3 = m1;    copy constructor
    /// if we use default copy constructor we get the Pointers but we don't get the location at which they are pointing...
    /// we use self made constructor which uses "Deep Copy" and default uses the "Shawllo copy".
    if(m1==m3){
        cout<<"same"<<endl;
    }else{
        cout<<"Not Same"<<endl;
    }
    return 0;
}
