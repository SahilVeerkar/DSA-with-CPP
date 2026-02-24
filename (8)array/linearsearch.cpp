#include <iostream>
using namespace std;
int linearsearch(int arr[], int key, int n)
{
  for (int i = 0; i < n; i++)
  {
    if (key == arr[i])
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int key;
  cin >> key;
  int n = 5;
  int arr[5] = {2, 3, 9, 6, 7};
  int result = linearsearch(arr, key, n);
  if (result != -1)
  {
    cout << "key is available";
  }
  else
  {
    cout << "key is not available";
  }
}