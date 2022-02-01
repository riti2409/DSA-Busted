 #include<bits/stdc++.h>
using namespace std;

void fibonacci(int num){
    int t1=0,t2=1;
    int nxtt;
    for(int i=1;i<num;i++){
        cout<<t1<<endl;

        nxtt=t1+t2;
       t1=t2;
       t2=nxtt;
    }
    
}
int main(){
    int n;
    cin>>n;
        fibonacci(n);
    return 0;
}