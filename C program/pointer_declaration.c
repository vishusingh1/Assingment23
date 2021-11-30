#include <stdio.h>
int main(){

int* pc, c, d;
c = 5;
d = -15;

pc = &c; printf("%d", *pc); // Output: ?
pc = &d; printf("%d", *pc); // Ouptut: ?
return 0;
}
