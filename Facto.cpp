#include<iostream>

using namespace std;

int facto(int n){
    int fact=1;
    for(int i = 2 ; i <= n; i++){

        fact = fact * i;

    }
    return fact;
}

int main(){
    int num;
    cout<<"Enter the Number to get its factorial : ";
    cin>>num;

    int ans = facto(num);
    cout<<ans<<endl;
    int bns = facto(10 - 5);
    cout<<bns;
    return 0;
}
