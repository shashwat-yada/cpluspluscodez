#include<iostream>
using namespace std;

int main(){
    int ans=0;
    int maxi=0;
    int arr[5]={4,6,11,2,8};
    int len=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<len-1;i++){
        if(arr[i]<arr[i+1]){
            ans=arr[i];
        }

    }
    for(int t=0;t<len-1;t++){
        if(arr[t]>arr[t+1]){
            maxi=arr[t];
            

        }
    }
    cout<<ans<<endl;
    cout<<maxi;


    
    

    
}