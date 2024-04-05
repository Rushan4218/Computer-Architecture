// Conversion from binary to decimal

#include <stdio.h>
#include <math.h>

int convertToDecimal(int binaryData)
{
  int digit;
  int result = 0;
  for(int i = 0; binaryData != 0; binaryData /= 10, i++) 
  {
    digit = binaryData % 10;
    result = result + digit * pow(2, i);
  }
  return result;
}

int main()
{
  int binaryData;
  printf("Enter a binary data: ");
  scanf("%d", &binaryData);
  int decimalData = convertToDecimal(binaryData);
  printf("The binary value of the given data is: %d", decimalData);
  return 0;
}