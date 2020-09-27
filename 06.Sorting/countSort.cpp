#include <iostream>

using namespace std;

void countSort(int a[], int n, int k)
{
    int count[k] = {0};
    for (int i = 0; i < n; i++)
        count[a[i]]++;
    for (int i = 1; i < k; i++)
        count[i] = count[i] + count[i - 1]; //To determine the position of each elements
    int temp[n] = {0};
    for (int i = n - 1; i >= 0; i--)
    {
        temp[count[a[i]] - 1] = a[i];
        count[a[i]]--;
    }
    for (int i = 0; i < n; i++)
        a[i] = temp[i];
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
    int k;
    cin >> k;
    countSort(a, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}