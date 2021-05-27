#include<iostream>

using namespace std;

int linearSearch(int arr[], int sizeofArray, int keyans){
    for(int i = 0; i <= sizeofArray; i++){
        if(arr[i]==keyans){
            return i;
        }
    }return -1;

}

int main(){        /// Linear Search Time Complexity : O(n).
    int n;
    cout<<"Enter the Size of the Array : ";
    cin>>n;

    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the Key to find : ";
    cin>>key;
    int ans = linearSearch(arr, n, key);
    cout<<ans;
    return 0;
}
