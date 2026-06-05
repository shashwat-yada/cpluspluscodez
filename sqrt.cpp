#include<iostream>
using namespace std;

int main(){
    int x,temp;

    int n;

    cout<<"enter the number";
    cin>>x;

    for(n=1;n<=x+1;n=n+1){
        temp=n*n;
        if(x==temp){
            cout<<n;
            break;
        }
        else if(temp>=x){
            cout<<n;
            break;

        }

    }
}