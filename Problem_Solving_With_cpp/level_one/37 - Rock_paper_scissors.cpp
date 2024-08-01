#include <iostream>
using namespace std;

string challenge(string player1, string player2){
  
  if (player1 == "Rock" && player2 == "Paper")
    return "Paper";
  if (player1 == "Rock" && player2 == "Scissors")
    return "Rock";
  if (player1 == "Paper" && player2 == "Scissors")
    return "Scissors";
  
  return "Error";
}

int main(){
  
  cout << challenge("Rock", "Scissors") << "\n";    // ==> Rock
  cout << challenge("Paper", "Scissors") << "\n";   // ==> Scissors
  cout << challenge("Rock", "Paper") << "\n";       // ==> Paper
  
  return 0;
}