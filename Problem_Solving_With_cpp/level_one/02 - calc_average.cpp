#include <iostream>
#include <vector>
using namespace std;

#include <vector>
using namespace std;

double calcAverage(const std::vector<int>& values){
  double sum = 0;
  
  
  for (int i = 0; i < values.size(); i++)
  {
    sum += values[i];
  }
  return sum / values.size();
}

int main(){
  
  cout << calcAverage({50, 40, 30, 80, 100}) << "\n";
  
  return 0;
}