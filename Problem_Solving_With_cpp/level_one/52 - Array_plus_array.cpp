#include <iostream>
#include <vector>
using namespace std;

int arrayPlusArray(vector<int> a, vector<int> b) {
  int sum = 0;
  
  for (int i = 0; i < a.size(); i ++) sum += a[i];
    
  for (int j = 0; j < b.size(); j++) sum += b[j];
  
  return sum;
}

int main(){
  
  cout << arrayPlusArray({1, 2, 3, 4}, {1, 2, 3, 4}) << "\n";
  
  return 0;
}