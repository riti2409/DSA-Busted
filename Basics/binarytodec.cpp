#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int p=1;
    while(n>0){
        int r=n%10;
        sum=p*r+sum;
        p=p*2;
        n=n/10;

    }
    cout<<sum;
}