//find a pair in sorted array whose sum is closest to x
#include <bits/stdc++.h>
using namespace std;
pair<int, int> sortedsumapir(vector<int> &v, int x)
{
    int diff = INT_MAX;
    int s = 0;
    int e = v.size() - 1;
    int res_l, res_r;
    while (s < e)
    {
        if (abs(v[s] + v[e] - x) < diff)
        {
            res_l = s;
            res_r = e;
            diff = abs(v[s] + v[e] - x);
        }
        if (v[s] + v[e] > x)
        {
            e--;
        }
        else
        {
            s++;
        }
    }
    return {v[res_l], v[res_r]};
}
int main()
{
    vector<int> v = {10, 22, 28, 29, 30, 40};
    int x;
    cin >> x;
    pair<int, int> it1 = sortedsumapir(v, x);

    cout << it1.first << " " << it1.second;

    return 0;
}