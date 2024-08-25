#include <iostream>
using namespace std;
#include <string>
#include <vector>
int removeDuplicates(vector<int> &nums)
{
  int i = 1, j = 0;
  while (i < nums.size())
  {
    if (nums[i] == nums[j])
      i++;
    else
      nums[++j] = nums[i++];
  }
  return j + 1;
}
int main()
{
  vector<int> nums = {1, 1, 2};

  return 0;
}