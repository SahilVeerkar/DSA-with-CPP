#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n = 4;
    while (i <= n)
    {
        char j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}