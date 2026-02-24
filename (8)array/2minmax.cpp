#include <iostream>
using namespace std;
int min(int minmax[], int n)
{
    int INT_MAX;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (minmax[i] < min)
        {
            min = minmax[i];
        }
    }

    return min;
}

int max(int minmax[], int n)
{
    int INT_MIN;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (minmax[i] > max)
        {
            max = minmax[i];
        }
    }

    return max;
}
int main()
{
    int n;
    cin >> n;
    int minmax[100];
    for (int i = 0; i < n; i++)
    {
        cin >> minmax[i];
    }
    cout << "min value in this array is" << min(minmax, n) << endl;
    cout << "max value in this array is" << max(minmax, n) << endl;
}