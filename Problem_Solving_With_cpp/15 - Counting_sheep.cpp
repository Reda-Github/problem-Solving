#include <iostream>
#include <vector>
using namespace std;

int counting(vector<bool> arr){
  int result = 0;
  
  for (int i = 0; i < arr.size(); i++)
    if(arr[i] == true)
      result++;
  
  return result;
}

int main(){
  
  cout << counting({true, false, false, true, true, true, true}) << "\n";
  
  return 0;
}