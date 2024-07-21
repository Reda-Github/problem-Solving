#include <iostream>
#include <vector>
using namespace std;

int sqr(vector<int> nums){
  int sum = 0;
  
  for (int i = 0; i < nums.size(); i++)
    sum += (nums[i] * nums[i]);
  
  return sum;
}

int main(){
  
  cout << sqr({1, 2, 2}) << "\n";
  
  return 0;
}