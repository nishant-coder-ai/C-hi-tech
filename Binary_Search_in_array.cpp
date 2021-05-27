#include<iostream>

using namespace std;

int BinarySearch(int arr[], int sizeofArray, int keyans){
    int s= 0;
    int e= sizeofArray;
    while(s<=e){
        int mid = (s + e)/2;
        if(arr[mid]==keyans){
            return mid;
        }
        else if(arr[mid]>keyans){
            e = mid-1;
        }else{
            s = mid + 1;
        }

    }return -1;
}

int main(){                /// Time Complexity : O(log n) base 2
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
    int ans = BinarySearch(arr, n, key);
    cout<<ans;
    return 0;
}

