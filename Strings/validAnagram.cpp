using namespace std;
#include <iostream>
// What are anagrams?
// If two strings contain the same characters but in a different order, they can
// be
// said to be anagrams. Consider race and care. In this case, race's characters
// can be formed into a study, or care's characters can be formed into race.
// Below is a java program to check if two strings are anagrams or not.
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
