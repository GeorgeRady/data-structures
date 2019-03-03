#include "stdio.h"
#include "string.h"

void swap(short *xp, short *yp)
{
    short temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//type 1:short, 2:int, 3:float, 4:double
void Sort(void* values, int nValues, int type)
{
  //sort short-type arrays using bubble sort
  if (type == 1)
  {
    int i, j;
    for (i = 0; i < nValues-1; i++)
    {
      // Last i elements are already in place
      for (j = 0; j < nValues-i-1; j++)
      {
        if (values[j] > values[j+1])
        {
          swap(&values[j], &values[j+1]);
        }
      }
    }
  }

  //sort float-type arrays using bubble sort
  if (type == 3)
  {

  }
}

void main()
{
  //declaring unsorted arrays
  short x[5] = {21, 90, 83, 92, 49};
  float y[5] = {12.7f, 98.3f, 79.0f, 82.1f, 74.9f};

  //sort the short-type array and print
  Sort(x, 5, 1);
  printf("\r\nsorted x:\r\n");
  for(int i=0;i<5;i++)
  {
    printf("%d\r\n", x[i]);
  }

  //sort the float-type array and print
  // Sort(y, 5, 3);
  // printf("\r\nsorted y:\r\n");
  // for(int i=0;i<5;i++)
  // {
  //   printf("%d\r\n", y[i]);
  // }

}
