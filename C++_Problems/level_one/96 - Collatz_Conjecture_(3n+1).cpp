/*
The Collatz conjecture (also known as 3n+1 conjecture) is a conjecture that applying the following algorithm to any number we will always eventually reach one:
*/


unsigned int hotpo(unsigned int n){
  int count = 0;
  
  while (n != 1)
  {
    if (n % 2 == 0) n = n / 2;
    else n = 3 * n + 1;
    count ++;
  }
  return count;
}
