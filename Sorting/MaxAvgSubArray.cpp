#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <limits.h>
double findMaxAverage(vector<int> &nums, int k)
{
  double avgSum = INT_MAX;
  for (int i = 0; i < nums.size() - 1; i++)
  {
    int k = k;
    double currAvg = 0;
    while (k)
    {
      currAvg = (nums[i] + nums[i + 1]);
      k--;
    }
    currAvg = currAvg / k;
    if (avgSum < (currAvg))
    {
      avgSum = currAvg;
    }
  }
  return avgSum;
}
int main()
{
  vector<int> arr = {1, 12, -5, -6, 50, 3};
  double ans = findMaxAverage(arr, 4);
  cout << ans;
  return 0;
}