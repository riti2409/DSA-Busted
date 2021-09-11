#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> v)
{
    int n = v.size();
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> v = {1, 2, 4, 8, 3};

    for (auto t : v)
    {
        cout << t << " ";
    }
    cout<<endl;
    reverseArray(v);
    return 0;
}
