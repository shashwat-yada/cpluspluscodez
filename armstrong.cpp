#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int x){
    int ans=0;
    int rem;
    double sq;
    int cmp=x;
    int count=0;
    int cop=x;
    cout << "cmp = " << cmp << endl;
    cout << "ans = " << ans << endl;
    cout << "count = " << count << endl;
    if(x==0){
        return 0;
    }
    while(cop!=0){
        cop=cop/10;
        count++;

    }
    while(x!=0){
        rem = x%10;
        cout<<"rem= "<<rem<<endl;
        sq=pow(rem,count);
        cout<<"sq= "<<sq<<endl;
        ans=ans+sq;
        cout<<"ans= "<<ans<<endl;
        x=x/10;
        
    }
    if(cmp==ans){
        return 1;
    }
    else {
        return 0;
    }



}
int main(){
    int num;
    cout<<"enter a number";
    cin>>num;
    cout<<endl;
    cout<<armstrong(num);



}





