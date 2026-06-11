#include<iostream>
using namespace std;

int prime(int x){
    if(x<2){
        return 0;
    }
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }

    }
    return 1;

}

int factorial(int z){
    double fact=1;
    for(int i=1;i<=z;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int a,b;
    cout<<"b should be not less than a"<<endl;
    cout<<"enter a number of a & b: ";
    cin>>a>>b;
    cout<<prime(a)<<endl;
    cout<<prime(b)<<endl;
    cout<<factorial(b)<<endl;
    cout<<prime(b-a)<<endl;
    cout<<factorial(b-a)<<endl;
}
