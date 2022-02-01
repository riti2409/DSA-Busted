#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int on=n;
    int sum=0;
    while(n>0){
        int r=n%10;
        sum=sum+(r*r*r);
        n=n/10;

    }
    if(sum==on)
    cout<<"armstrong"<<endl;
    else
    cout<<"not armstrong"<<endl;
}