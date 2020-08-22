#include <bits/stdc++.h>

using namespace std;

int longestEvenOdd(int a[], int n)
{
    int max = 1;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] % 2 == 0 && a[i - 1] % 2 != 0) || (a[i - 1] % 2 == 0 && a[i] % 2 != 0))
        {
            count++;
            if (max < count)
                max = count;
        }
        else
            count = 1;
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << longestEvenOdd(a, n) << endl;
    return 0;
}