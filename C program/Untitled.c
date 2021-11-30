#include <stdio.h>
int getMax( int set[] ) {
   int i, max;
   max = set[0];
   i = 1;    
   while( i < 5 ) {
      if( max <  set[i] ) {
         max = set[i];
      }
      i = i + 1;
   }
   return max;
}
main() {
   int set1[5] = {10, 20, 30, 40, 50};
   int set2[5] = {101, 201, 301, 401, 501};
   int max;
   max = getMax(set1);
   printf("Max in first set = %d\n", max );
   max = getMax(set2);
   printf("Max in second set = %d\n", max );
}
