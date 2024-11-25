/*
Given an unsorted array of 3 positive integers [ n1, n2, n3 ], determine if it is possible to form a Pythagorean Triple using those 3 integers.

A Pythagorean Triple consists of arranging 3 integers, such that:
*/


#include <cmath>
using namespace std;
bool PythagoreanTriple(const int a, const int b, const int c)
{
  return 
    pow(a, 2) + pow(b, 2) == pow(c, 2) ||
    pow(a, 2) + pow(c, 2) == pow(b, 2) ||
    pow(b, 2) + pow(c, 2) == pow(a, 2) ;
}