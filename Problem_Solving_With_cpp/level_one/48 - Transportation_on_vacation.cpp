#include <iostream>
using namespace std;
/*
After a hard quarter in the office you decide to get some rest on a vacation. So you will book a flight for you and your girlfriend and try to leave all the mess behind you.

You will need a rental car in order for you to get around in your vacation. The manager of the car rental makes you some good offers.

Every day you rent the car costs $40. If you rent the car for 7 or more days, you get $50 off your total. Alternatively, if you rent the car for 3 or more days, you get $20 off your total.
*/

int rental_car_cost(int d){
  int p = 40;
  if (d < 3) return d * p;
  if (d < 7) return d * p - (20);
  return d * p - (50);
};

int main(){
  
  cout << rental_car_cost(3) << "\n";
  
  return 0;
}