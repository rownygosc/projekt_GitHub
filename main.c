#include <stdio.h>

int dodawanie(int a, int b)
{
    return a+b;
}
int main() {
    printf("Hello, World!\n");
    printf("W pierwszym branchu: 2+3 = ", dodawanie(2,3));
    return 0;
}
