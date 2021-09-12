#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev=prev-1;
        }
        arr[prev+1]=curr;
    }

}
int main(){
int a[]={1,5,2,4,9,7};
int n=sizeof(a)/sizeof(int);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
insertion_sort(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
    return 0;
}