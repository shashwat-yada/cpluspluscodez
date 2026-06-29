#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int search;
    cout<<"limitation till 5 index"<<endl;

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"enter the number for the search"<<endl;
    cin>>search;
    int ans;
    for(int i=0;i<5;i++){
        if(arr[i]==search){
            ans=i;
        }
    }
    cout<<endl;
    cout<<"index at which the number is found is "<<ans;
}