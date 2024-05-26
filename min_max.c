#include <stdio.h>

int main ()
{
  int i, x[10];
  int total=0;
  int average=0;
  for (i = 0; i <= 9; i++)
	{
	  scanf ("%d", &x[i]);
	}

  for (i = 0; i <= 9; i++)
	{
	  printf ("x[%d]=%d\n", i + 1, x[i]);
	}

  int max = 0;
  int min = 0;

  max = x[0];
  min = x[0];

  for (i = 1; i <10; i++)
	{
	  if (x[i] > max)
		max = x[i];
	}
  printf ("The maximum is %d\n", max);

  for (i = 10; i <= 0; i--)
	{
	  if (x[i] < min)
		min = x[i];
	}
  printf ("The maximum is %d\n", min);

  for(i=0;i<=9;i++)
  {
      total=total+x[i];
      
  }
  average=(total/10);
  printf("The average is %d",average);
  return 0;
}

