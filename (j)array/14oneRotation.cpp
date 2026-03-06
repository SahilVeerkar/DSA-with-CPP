#include <iostream>
using namespace std;
int main()
{
  int n = 5;
  int arr[5] = {2, 4, 5, 6, 7};
  int temp = arr[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[0] = temp;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ",";
  }
}
