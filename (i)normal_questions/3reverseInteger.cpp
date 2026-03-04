// leetcode problem no.7(reverse integer)
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21

// Constraints:

// -231 <= x <= 231 - 1

#include <iostream>
using namespace std;
#include <climits>
int main()
{
  // int INT_MAX;
  // int INT_MIN;
  int rem;
  int ans = 0;
  int x;
  cout << "enter the integer :";
  cin >> x;
  while (x)
  {
    rem = x % 10;
    x = x / 10;
    if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
    {
      return 0;
    }
    ans = ans * 10 + rem;
  }
  cout << ans;
}