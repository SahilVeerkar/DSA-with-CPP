#include <iostream>
using namespace std;
void swapalt(int arr[], int n)
{
  int start = 0;
  int end = start + 1;
  while (start < n - 1)
  {
    swap(arr[start], arr[end]);
    start += 2;
    end += 2;
  }
}
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
}
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int n = 5;
  swapalt(arr, n);
  print(arr, n);
}