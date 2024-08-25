using namespace std;
#include <iostream>
#include <vector>
void Insertion_Sort(vector<int> &arr)
{
  //Ignore the 1st element and begin with 2nd one .
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
  Insertion_Sort(a);
  print_array(a);
}