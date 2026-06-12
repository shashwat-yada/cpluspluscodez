#include<iostream>
using namespace std;
void swap(int &x, int &y){
    int c=x;
    x=y;
    y=c;
    //cout<<x<<endl;
    //cout<<y<<endl;


    
    


}

int main(){
    int a,b;
    cout<<"enter the two numbers: ";
    cin>>a>>b;
    
    swap(a,b);
    cout<<a<<"-"<<b;
    

}