#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n = 4;
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value;
            value = value + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}