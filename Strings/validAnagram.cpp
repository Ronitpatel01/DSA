using namespace std;
#include <iostream>
bool isAnagram(string s, string t)
{
  int arr[256] = {0};

  if (s.size() != t.size())
    return false;
  for (int i = 0; i < s.size(); i++)
  {
    arr[s[i]]++;
  }
  cout << endl;
  for (int i = 0; i < s.size(); i++)
  {
    arr[t[i]]--;
  }

  for (int i = 0; i < 256; i++)
  {
    if (arr[i])
      return false;
  }
  return true;
}
