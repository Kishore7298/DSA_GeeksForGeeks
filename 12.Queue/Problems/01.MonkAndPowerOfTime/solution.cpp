#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int> order, ideal;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        order.push(elem);
    }
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        ideal.push(elem);
    }
    int steps = 0;
    while (order.empty() != true)
    {
        while (order.front() != ideal.front())
        {
            int elem = order.front();
            order.pop();
            order.push(elem);
            steps++;
        }
        order.pop();
        ideal.pop();
        steps++;
    }
    cout << steps << endl;
}