#include <bits/stdc++.h>
using namespace std;
vector<int> krotate(vector<int> &v, int x)
{
    int n = v.size();
    x =(n+ x) % n;

     
     vector<int>v1;
    for (int i = 0; i < n; i++)
    {
        if (i < x)
        {
            v1.push_back(v[n - x + i]);
        }
        else
        {
            v1.push_back(v[i - x]);
        }
    }
    return v1;
    
}
int main()
{
    vector<int> v = {1, 3, 5, 7, 9};
    int x = 2;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
  vector<int> v1= krotate(v, x); 
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    
    return 0;
}