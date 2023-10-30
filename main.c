#include <stdio.h>

int iloczyn(int a, int b)
{
    return a*b;
}
int main() {
    printf("Hello, World!\n");
    printf("W drugim branchu: 2*3 = ", iloczyn(2,3));
    return 0;
}
