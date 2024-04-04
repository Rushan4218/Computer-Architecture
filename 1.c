// program to implement 1's and 2's complement

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 10

char *onesComplement(char *binaryData, int n)
{
  static char tempData[MAX_SIZE];
  for (int i = 0; i < n; i++)
  {
    if (binaryData[i] == '0')
      tempData[i] = '1';
    else
      tempData[i] = '0';
  }
  return tempData;
}

char *twosComplement(char *binaryData, int n)
{
  static char tempData[MAX_SIZE];
  bool flip = false;
  for (int i = n - 1; i >= 0; i--)
  {
    if (binaryData[i] == '0')
    {
      if (!flip)
        tempData[i] = binaryData[i];
      else
        tempData[i] = '1';
    }
    else
    {
      if (!flip)
      {
        tempData[i] = binaryData[i];
        flip = true;
      }
      else
        tempData[i] = '0';
    }
  }
  return tempData;
}

int main()
{
  int n;
  printf("Enter the number of bits: ");
  scanf("%d", &n);
  char binaryData[n], onesComp[n], twosComp[n];
  printf("Enter a binary data: ");
  scanf("%s", &binaryData);

  strcpy(onesComp, onesComplement(binaryData, n));
  strcpy(twosComp, twosComplement(binaryData, n));
  printf("%s\n", onesComp);
  printf("%s\n", twosComp);

  return 0;
}