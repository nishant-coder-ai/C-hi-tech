#include<iostream>

using namespace std;

class Mobile{
    int nulerscima;
public:
    string name = "Blackberry";
    int price = 499;
protected:
    int ram;
    int rom;
};

class Samsung : public Mobile{
public:
    cout<<"Single Inheritance"<<endl;
};

class Motorola{
public:
    cout<<"Hello Moto"<<endl;
};
class Apple: public Mobile, public Motorola{   /// here protected and public members of M & S come in public in apple
    public:
    cout<<"Shame on me, Multiple Inheritance."<<endl;
};

class Xiome : public Samsung{
    public:
        cout<<"Multilevel Inheritance"<<endl;
};

class Lenovo: public Motorola , public Samsung{
public:
    cout<<"Hybrid Inheritance"<<endl;
};

/**
Hierarchical Inheritance
                            classA
                              |
                      |--------------------|
                    classB              classC
                      |                    |
             |----------------|      |---------------|
           classD           classE  classF         classG



**/

int main(){

    return 0;
}
