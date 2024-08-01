/*
Our football team has finished the championship.

Our team's match results are recorded in a collection of strings. Each match is represented by a string in the format "x:y", where x is our team's score and y is our opponents score.

For example: ["3:1", "2:2", "0:1", ...]

Points are awarded for each match as follows:

if x > y: 3 points (win)
if x < y: 0 points (loss)
if x = y: 1 point (tie)
*/

using namespace std;
int points(array<string, 10> games) {
  int result = 0;
  for (int i = 0; i < 10; i++)
  {
    if (games[i][0] == games[i][2]) result += 1;
    if (games[i][0]  > games[i][2]) result += 3;
  }
  return result;
}