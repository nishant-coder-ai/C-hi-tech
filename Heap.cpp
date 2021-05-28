#include<iostream>

using namespace std;

int main(){
    int *num = new int();  ///allocate dynamically memory to integer.
    *num = 10;

    int *a = new int[];  ///allocate dynamically memory to array.

    delete(num);     ///deallocate dynamically memory of integer.
    delete[]a;      ///deallocate dynamically memory of array.
    return 0;
}
