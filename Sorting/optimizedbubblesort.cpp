#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    bool swapp=false;
    for(int i=0;i<n-1;i++){
        swapp=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            swapp=true;
        }
        if(swapp==false) return;
    }

}
int main(){
int a[]={1,5,2,4,9,7};
int n=sizeof(a)/sizeof(int);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
bubble_sort(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
    return 0;
}