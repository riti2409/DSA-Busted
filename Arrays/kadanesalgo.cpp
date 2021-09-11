#include <bits/stdc++.h>
using namespace std;
void kadanes(int v[], int n)
{
int curr_sum=0;
int max_sum=0;
    for (int i = 0; i < n; i++)
    {
        curr_sum+=v[i];
        if(curr_sum<0){
            curr_sum=0;
        }
        max_sum=max(curr_sum,max_sum);
    }
    
    cout<<max_sum;
}
int main()
{
    int v[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(v) / sizeof(int);

    kadanes(v, n);
    return 0;
}
