// leetcode 74:-
// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

// Example 1:

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 100
// -104 <= matrix[i][j], target <= 104

#include <iostream>
using namespace std;
bool search(int arr[][3], int target, int n, int m)
{

  int s = 0;
  int e = n * m - 1;
  while (s <= e)
  {
    int mid = s + (e - s) / 2;
    int row = mid / m;
    int col = mid % m;
    if (arr[row][col] == target)
    {
      return true;
    }
    else if (arr[row][col] < target)
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
  }
  return false;
}
int main()
{
  int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int target = 9;
  int n = 3;
  int m = 3;
  cout << search(arr, target, n, m);
}