#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main()
{
   int *x = 0;
   printf("Content at address 0: %d\n", *x);
   exit(0);
}