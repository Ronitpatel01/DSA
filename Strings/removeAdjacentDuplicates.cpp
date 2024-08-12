// T.C. o(n)
using namespace std;
#include <iostream>
#include <vector>
#include <string>
string removeDuplicates(string s)
{
  string ans;
  for (char ch : s)
  {
    if (ans != "" && ans.back() == ch)
      ans.pop_back();
    else
      ans.push_back(ch);
  }
  return ans;
}