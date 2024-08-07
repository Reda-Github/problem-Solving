#include<vector>
#include <iostream>

long elementsSum(const std::vector<std::vector<int>>& arr, int d = 0){
  long result = 0;
  int index = arr.size();
  for (int i = 0; i < arr.size(); i++)
  { 
    int count = index - 1 - i;
    if (arr[i].size() > count)
    {
      result += arr[i][count];
    }
    else
    {
      result += d;
    }
  }
  return result;
}

int main(){
  
  std::cout << elementsSum({{3}, {4, 6, 5, 3, 2}, {10, 8, 7, 4}});
  
  return 0;
}