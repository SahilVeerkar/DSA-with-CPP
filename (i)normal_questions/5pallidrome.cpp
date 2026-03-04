// 9. Palindrome Number (leetcode)

// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

// Constraints:

// -231 <= x <= 231 - 1

#include <iostream>
using namespace std;
int main()
{
  int x;
  cin >> x;
  int num = x;
  long long ans = 0;
  int rem;
  if (x < 0)
  {
    cout << "false";
  }
  while (x != 0)
  {
    rem = x % 10;
    x = x / 10;
    ans = ans * 10 + rem;
  }
  if (num == ans)
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }
}