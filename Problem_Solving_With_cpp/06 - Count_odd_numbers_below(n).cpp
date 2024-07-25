/*
Given a number n, return the number of positive odd numbers below n, EASY!
*/

#include <iostream>
#include <vector>
using namespace std;

int countNums(vector<int> nums){
  int sumOdd = 0;
  
  for (int i = 0; i < nums.size(); i++)
    if (nums[i] % 2 != 0)
      sumOdd++;
  
  return sumOdd;
}

// solution => num / 2;    ===> 6 / 2 = 3  :: 7 / 2 = 3

int main(){
  
  cout << countNums({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) << "\n";
  
  return 0;
}