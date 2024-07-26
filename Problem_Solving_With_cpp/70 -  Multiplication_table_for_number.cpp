/*
Your goal is to return multiplication table for number that is always an integer from 1 to 10.

For example, a multiplication table (string) for number == 5 looks like below:

P. S. You can use \n in string to jump to the next line.

Note: newlines should be added between rows, but there should be no trailing newline at the end. If you're unsure about the format, look at the sample tests
*/

#include <string>
using namespace std;
string multi_table(int number)
{
  string result = "";
  
  for (int i = 1; i <= 10; i++)
  {
    result += to_string(i) + " * " + to_string(number) + " = " + to_string(i * number);
    if (i < 10)
    {
      result += "\n";
    }
  }
  return result;
}