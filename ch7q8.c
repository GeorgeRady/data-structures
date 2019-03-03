/*
© 2019 George Magdy -- Ahmed Shehab -- Rana Wael
All Rights Reserved
*/

#include "stdio.h"

void swap_short(short *xp, short *yp);
void swap_int(int *xp, int *yp);
void swap_float(float *xp, float *yp);
void swap_double(double *xp, double *yp);
void Sort(void* values, int nValues, int type);

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
  Sort(y, 5, 3);
  printf("\r\nsorted y:\r\n");
  for(int i=0;i<5;i++)
  {
    printf("%lf\r\n", y[i]);
  }
}

//declaring swap functions for different data types
void swap_short(short *xp, short *yp)
{
    short temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void swap_int(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void swap_float(float *xp, float *yp)
{
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void swap_double(double *xp, double *yp)
{
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//type 1:short, 2:int, 3:float, 4:double
void Sort(void* values, int nValues, int type)
{
  //sort short-type arrays using bubble sort
  if (type == 1)
  {
    short* shortarr = values;
    int i, j;
    for (i = 0; i < nValues-1; i++)
    {
      // Last i elements are already in place
      for (j = 0; j < nValues-i-1; j++)
      {
        if (shortarr[j] > shortarr[j+1])
        {
          swap_short(&shortarr[j], &shortarr[j+1]);
        }
      }
    }
  }

  //sort short-type arrays using bubble sort
  if (type == 2)
  {
    int* intarr = values;
    int i, j;
    for (i = 0; i < nValues-1; i++)
    {
      // Last i elements are already in place
      for (j = 0; j < nValues-i-1; j++)
      {
        if (intarr[j] > intarr[j+1])
        {
          swap_int(&intarr[j], &intarr[j+1]);
        }
      }
    }
  }

  //sort float-type arrays using bubble sort
  if (type == 3)
  {
    float* floatarr = values;
    int i, j;
    for (i = 0; i < nValues-1; i++)
    {
      // Last i elements are already in place
      for (j = 0; j < nValues-i-1; j++)
      {
        if (floatarr[j] > floatarr[j+1])
        {
          swap_float(&floatarr[j], &floatarr[j+1]);
        }
      }
    }
  }

  //sort short-type arrays using bubble sort
  if (type == 4)
  {
    double* doublearr = values;
    int i, j;
    for (i = 0; i < nValues-1; i++)
    {
      // Last i elements are already in place
      for (j = 0; j < nValues-i-1; j++)
      {
        if (doublearr[j] > doublearr[j+1])
        {
          swap_double(&doublearr[j], &doublearr[j+1]);
        }
      }
    }
  }
}
