#include <bits/stdc++.h>
using namespace std;

void dectohex(int n)
{
    char ans[100];

    int i = 0;
    while (n > 0)
    {

        int ld = 0;
        ld = n % 16;
        if (ld < 10)
        {
            ans[i] = ld + 48;
            i++;
        }
        else
        {
            ans[i] = ld + 55;
            i++;
        }
        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << ans[j];
}

int main()
{
    int n;
    cin >> n;
    dectohex(n);
    return 0;
}