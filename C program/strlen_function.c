#include <stdio.h>
int main() {
    char s[] = "Programming is fun";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}#include<iostream>
using namespace std;
main() {
   int x, y, z;
   x = 10;
   y = 10;
   z = ++x; //z will hold 11
   cout << "Z: " << z << endl;
   z = y++; //z will hold 10, then y will be 11
   cout << "Z: " << z << " and y is: " << y << endl;
}
