#include<bits/stdc++.h>
using namespace std;

int fact (int num){
    int fac=1;
    for(int i=2;i<=num;i++){
        fac*=i;
    }
    return fac;
    
}
int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}