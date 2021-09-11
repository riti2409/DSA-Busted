#include <bits/stdc++.h>
using namespace std;
int lowerbound(int a[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
       int mid=(s+e)/2;
        if(a[mid]>key){
            e=mid-1;
        }
        else{
           ans=a[mid];
           s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int a[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(a) / sizeof(int);
    int x;
    cin>>x;
    int it =lowerbound(a,n,x);
    cout<<it;
    return 0;
}