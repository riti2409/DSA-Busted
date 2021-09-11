#include <bits/stdc++.h>
using namespace std;
void printing_subarray(int v[], int n)
{
    int largest_Sum = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int subarraysum = 0;
            for (int k = i; k <= j; k++)
            {
                subarraysum += v[k];
            }
            largest_Sum=max(subarraysum,largest_Sum);
        }
    }
cout<<largest_Sum<<endl;
}
int main()
{
    int v[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(v) / sizeof(int);

    printing_subarray(v, n);
    return 0;
}
