#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cin >> r;
    cin >> c;

    int n;
    n = r * c;

    if (n % 2 ==0)
    {
        cout << n / 2;
    }

    else
    {
        cout << (n - 1) / 2;
    }

    return 0;
}