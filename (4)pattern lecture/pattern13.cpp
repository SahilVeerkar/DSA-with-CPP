#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n = 4;
    char inc = 'A';
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << inc;
            inc = inc + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}