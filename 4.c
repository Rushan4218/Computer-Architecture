// Program to implement binary adder

#include <stdio.h>

int main()
{

  int n;
  printf("Enter the no. of bits: ");
  scanf("%d", &n);

  char A[n], B[n], S[n];
  printf("Enter any 2 binary numbers:\n");
  scanf("%s", &A);
  scanf("%s", &B);
  char c = '0';
  for (int i = n - 1; i >= 0; i--)
  {
    char axorb, axbandc, aandb;
    if (A[i] != B[i])
      axorb = '1';
    else
      axorb = '0';

    if (axorb != c)
      S[i] = '1';
    else
      S[i] = '0';

    if (axorb == 1 && c == 1)
      axbandc = '1';
    else
      axbandc = '0';

    if (A[i] == '1' && B[i] == '1')
      aandb = '1';
    else 
      aandb = '0';
    
    if (axbandc == '0' && aandb == '0')
      c = '0';
    else 
      c = '1';  
  }

  printf("sum = %s\n", S);
  printf("Carry = %c", c);
  return 0;
}