#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        string abb = "";
        
        cin >> str;

        if (str.length() > 10)
        {
            abb = str[0] + to_string(str.length() - 2) + str[str.length() - 1];
        }

        else
        {
            abb = str;
        }

        cout << abb << endl;
    }

    return 0;
}