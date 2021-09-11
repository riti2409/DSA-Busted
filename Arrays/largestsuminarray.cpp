#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(a) / sizeof(int);
    int x=INT_MIN;
    // int max=*max_element(a,a+n);
    for(int i=0;i<n;i++){
        x=max(x,a[i]);
    }
    cout<<x;
    return 0;
}