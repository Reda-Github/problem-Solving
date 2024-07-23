#include <iostream>
using namespace std;

int rental_car_cost(int d){
  if (d < 3)
    return d * 40;
  if (d < 7)
    return (d * 40) - 20;

  return (d * 40) - 50;
}

int main(){
  
  cout << rental_car_cost(3) << "\n";
  
  return 0;
}