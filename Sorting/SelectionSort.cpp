using namespace std;
#include <iostream>
#include <vector>
void Selection_Sort(vector<int> &arr)
{
  // For the Ith iteration , select the minimuum element
  //  from i to n-1 index and swap it with the ith element
  int n = arr.size();
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i; j < n - 1; j++)
    {
      if (arr[j] < arr[min])
        min = j;
    }
    swap(arr[i], arr[min]);
  }
}
void print_array(vector<int> &arr)
{
  for (auto i : arr)
  {
    cout << i << " ";
  }
  cout << endl;
}
int main()
{
  vector<int> a = {3, 0, 5, 2, 62, 11, 9, -1, 345};
  print_array(a);
  Selection_Sort(a);
  print_array(a);
}