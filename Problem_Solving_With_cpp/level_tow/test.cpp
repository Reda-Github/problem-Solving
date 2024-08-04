#include <iostream>
#include <string>
using namespace std;

#include <vector>
#include <string>

vector<int> solve(vector<string> arr) {  
  
  vector<int> sum;
  int count = 1;
  
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr[i].size(); j++)
    {
      cout << arr[i][j] << "-";
    }
  }
  return {};
};


int main(){
  
  // if (int(97) == char('a')) cout << true;
  solve({ "abode", "ABc", "xyzD" });
  return 0;
}