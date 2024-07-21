#include <iostream>
#include <vector>
using namespace std;

float get_average(vector<float> nums){
  float sum = 0;
  int count = 0;
  
  for (int i = 0; i < nums.size(); i++)
  {
    sum += nums[i];
    count++;
  }
  
  return sum / nums.size();
}

int main(){
  
  cout << get_average({50, 40, 30, 80, 100}) << "\n";
  
  return 0;
}