#include "sum.h"

int sum(int a[], int n)
{
  if (n>0) // hvis den ikker er større end 0 så skal den retuner 0 
    return a[n-1]+sum(a,n-1); //sum af den nuværende tal og den næste i arrayet

    else
    return 0;

}
