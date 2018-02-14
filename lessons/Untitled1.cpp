#include <stdio.h>

void func2(int x) {
    printf("2.1 x = %i \n", x);
    x = x + 100;
    printf("2.2 x = %i \n", x);
}

void func1(int x) {
    x = x + 4;
    printf("1.1 x = %i \n", x);
    func2(x);
    printf("1.2 x = %i \n", x);
    func2(x);
    printf("1.3 x = %i \n", x);
}

int main() {
    int x = 11;
    printf("m.1 x = %i \n", x);
    func1(x);
    printf("m.2 x = %i \n", x);

    return 0;
}

