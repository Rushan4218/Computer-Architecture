// conversion of decimal to binary

#include <stdio.h>
#include <string.h>

void convertToBinary(int decimalData, char *binaryData)
{
  int rem;
  while (decimalData != 0)
  {
    rem = decimalData % 2;
    if (rem == 0)
      strcat(binaryData, "0");
    else
      strcat(binaryData, "1");
    decimalData /= 2;
  }
  strrev(binaryData);
}

int main()
{
  int decimalData;
  char binaryData[10];
  printf("Enter any decimal data: ");
  scanf("%d", &decimalData);
  convertToBinary(decimalData, binaryData);
  printf("The decimal value of the given data is: %s", binaryData);
  return 0;
}