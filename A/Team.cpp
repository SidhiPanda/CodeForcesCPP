#include <iostream>

using namespace std;

int main()
{
    int c = 0, n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int A[3];
        int p = 0;

        for (int j = 0; j < 3; j++)
        {
            cin >> A[j];
            if (A[j] == 1)
            {
                p = p + 1;
            }
        }

        if (p >= 2)
        {
            c = c + 1;
        }
    }

    cout << c;

    return 0;
}