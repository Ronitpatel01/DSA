#include <iostream>
using namespace std;
#include <string>
#include <vector>

bool checkpallindrome(string s, int i, int j)
{
  while (i < j)
  {
    if (s[i] != s[j])
      return false;
    i++;
    j--;
  }
  return true;
}
bool validPalindrome(string s)
{
  int i = 0, j = s.length() - 1;
  while (i < j)
  {
    if (s[i] == s[j])
    {
      i++;
      j--;
    }
    else
    {
      bool ans1 = checkpallindrome(s, i + 1, j);
      bool ans2 = checkpallindrome(s, i, j - 1);
      return ans1 || ans2;
    }
  }
  return true;
}

int main()
{
  string s = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";
  bool ans = validPalindrome(s);
  cout << ans;
  return 0;
}