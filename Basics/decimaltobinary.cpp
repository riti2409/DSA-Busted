#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        int r=n%2;
        sum=sum*10+r;
        n=n/2;

    }
    cout<<sum;
}