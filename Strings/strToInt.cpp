#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
int myAtoi(string s)
{
  int i = 0, ans = 0, sign = 1;
  while (i < s.size() && s[i] == ' ')
  {
    i++;
  }
  if (i < s.size() && s[i] == '-' || s[i] == '+')
  {
    sign = s[i] == '-' ? -1 : 1;
    i++;
  }
  while (i < s.size() && isdigit(s[i]))
  {
    if (ans > INT32_MAX / 10 || ans == INT32_MAX / 10 && s[i] > '7')
      return sign == -1 ? INT32_MIN : INT32_MAX;
    ans = ans * 10 + (s[i] - '0');
    i++;
  }
  return ans * sign;
}
int main()
{
  string s = "   -042";
  int ans = myAtoi(s);
  cout << ans;
  return 0;
}