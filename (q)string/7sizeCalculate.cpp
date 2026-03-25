#include <iostream>
using namespace std;
int main()
{
  string s = "sahil";
  int size = 0;
  while (s[size] != '\0')
  {
    size++;
  }
  cout << size;
}