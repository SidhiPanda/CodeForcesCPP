#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    long double A[N];
    long double Sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        Sum += A[i];
    }

    cout << Sum/N;

    return 0;
}

