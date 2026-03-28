class Solution
{
public:
  string add(string num1, string num2)
  {
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    string ans;
    int sum = 0;
    int carry = 0;

    while (j >= 0)
    {

      sum = (num1[i] - '0') + (num2[j] - '0') + carry;
      carry = sum / 10;
      ans += '0' + sum % 10;
      i--;
      j--;
    }
    while (i >= 0)
    {
      sum = (num1[i] - '0') + carry;
      ans += '0' + sum % 10;
      carry = sum / 10;
      i--;
    }
    if (carry)
    {
      ans = ans + '1';
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
  string addStrings(string num1, string num2)
  {
    if (num1.size() < num2.size())
    {
      return add(num2, num1);
    }
    else
    {
      return add(num1, num2);
    }
  }
};