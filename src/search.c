#include "search.h"
#include <stdbool.h>

bool search(int a[], int n, int x)
{
  if (n>0 && a[n-1]!=x) //hvis den er er større end 0 og den fundet tal er ikke = x så skal den blive ved 
    return search (a,n-1,x);

else if 
    (n>0&&a[n-1]==x)   // hvis den er større end 0 og den fundet tal er = x så retuner den 1 dvs. true
    return 1;

else // ellers retuner 0 dvs. false
    return 0;
}
