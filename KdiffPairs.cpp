using namespace std;
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
int bs(vector<int> &nums, int start, int expected)
{
  int end = nums.size() - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (expected == nums[mid])
      return mid;
    else if (expected > nums[mid])
    {
      start = mid + 1;
    }
    else
      end = mid - 1;
  }
  return -1;
}
int findPairs(vector<int> &nums, int k)
{
  sort(nums.begin(), nums.end());
  set<pair<int, int>> ans;
  for (int i = 0; i < nums.size(); i++)
  {
    if (bs(nums, i + 1, nums[i] + k) != -1)
    {
      ans.insert({nums[i], nums[i] + k});
    }
  }
  return ans.size();
}
