#include <vector>
using namespace std;

vector<int> evenNumbers(vector<int> arr, int n) {
  vector<int> array;
  
  
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] % 2 == 0)
      array.push_back(arr[i]);
  }
  vector<int> result(array.end() - n, array.end());
  
  return result;
}
