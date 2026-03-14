#include <iostream>
using namespace std;
int main()
{
  int n = 5;
  int arr[5] = {9, 2, 1, 4, 3};
  for (int i = 0; i < n - 1; i++)
  {
    int index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[index] > arr[j])
      {
        index = j;
      }
    }
    swap(arr[i], arr[index]);
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
    cout << ",";
  }
}