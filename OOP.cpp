#include<iostream>

using namespace std;

class Student{
    public:
        string name;
        int age;
        bool gender;

    void printInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;

    }
};

int main(){
    Student arr[3];
    for(int i = 0; i<3; i++){
        cout<<"Name : \n";
        cin>>arr[i].name;
        cout<<"Age : \n";
        cin>>arr[i].age;
        cout<<"Gender : \n";
        cin>>arr[i].gender;
    }
    for(int i = 0 ; i < 3; i++){
        arr[i].printInfo();
    }

    return 0;
}
