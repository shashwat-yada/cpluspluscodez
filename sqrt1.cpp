#include<iostream>
using namespace std;

int main(){
    int n,i;
    float a,b;

    int x;
    cout<<"enter the number";
    cin>>x;
    float ans=0;

    for(i=1;i<=x;i=i+1){
        if(i*i<=x){
            ans=i;
        }
        else{
            break;
        }

    }


    float increment=0.1;

    for(int precison=1;precison<3;precison++){
        while((ans+increment)*(ans+increment)<=x){
            ans=ans+increment;
        }
        increment=increment/10;

    }
    cout<<"square root"<<ans<<endl;
    return 0;
    



        

    




}