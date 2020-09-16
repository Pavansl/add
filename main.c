#include <stdio.h>
#include <stdlib.h>
#include "add.h"
#include "sub.h"


int main()
{
   int a=10,b=5,c,d;
   c=add(a,b);
   d=sub(a,b);
   printf("%d %d",c,d);
}
