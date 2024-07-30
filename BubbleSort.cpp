using namespace std;
#include <iostream>
#include <vector>
void Bubble_Sort(vector<int> &arr)
{
  int n = arr.size();
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
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
  vector<int> a = {3, 55, 5, 2, 62, 623, 9, 1, 345};
  print_array(a);
  Bubble_Sort(a);
  print_array(a);
}