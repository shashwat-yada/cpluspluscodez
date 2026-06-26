#include<iostream>
using namespace std;

int main(){

    int arr[]={2,5,7,8,6,4};

    int len=sizeof(arr)/sizeof(arr[0]);

    int temp=arr[len-1];

    for(int i=len-2;i>=0;i--){
        arr[i+1]=arr[i];


    }
    arr[0]=temp;

    for(int i=0;i<len;i++){
        cout<<arr[i];
        
    }
}