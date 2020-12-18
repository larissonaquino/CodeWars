#include <iostream>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1) return false;

    for (int i = 2; i <= floor(sqrt(num)); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    std::cout << isPrime(-7) << std::endl;

    system("pause");
}