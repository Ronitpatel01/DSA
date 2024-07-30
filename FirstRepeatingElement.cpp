using namespace std;
#include <iostream>
#include <vector>
#include <unordered_map>
int firstlyRepeated(vector<int> &arr)
{
  unordered_map<int, int> hash;
  for (int i = 0; i < arr.size(); i++)
  {
    hash[arr[i]]++;
  }
  for (int i = 0; i < arr.size(); i++)
  {
    if (hash[arr[i]] > 1)
    {
      return (i + 1);
    }
  }
  return -1;
}