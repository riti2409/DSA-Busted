#include <bits/stdc++.h>
using namespace std;
void printing_pairs(int v[],int n)
{
    
    for(int i=0; i<n;i++){
        int x=v[i];
        for(int j=i+1;j<n;j++){
            int y=v[j];
            cout<<x<<" ,"<<y<<endl;
        }
        cout<<endl;
    }
    
}
int main()
{
    int v[] = {10, 20, 40, 80, 30};
    int n=sizeof(v)/sizeof(int);
    
   
    printing_pairs(v,n);
    return 0;
}
