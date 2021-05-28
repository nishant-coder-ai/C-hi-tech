#include<iostream>

using namespace std;

int main(){
    int p = 9;

    int &y = p;
    cout<<p<<endl;
    cout<<y<<endl;
    y++;
    cout<<p
    <<endl;
    cout<<y<<endl;
    return 0;
}
