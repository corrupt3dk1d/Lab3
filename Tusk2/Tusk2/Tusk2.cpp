
#include <iostream>
int func1(int* n1, int* n2) {
    for (n1; n1 <= n2; n1++) std::cout << *n1 << ' ';
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int dif(int a, int b) {
    return a - b;
}

int func2(char c) {
    int (*pointer_sum_func)(int, int);
    if (c == '+') {
        pointer_sum_func = sum;
    }
    else {
        pointer_sum_func = dif;

    }
    return pointer_sum_func;
}

int main()
{
    std::cout << "Hello World!\n";
    int arr[4] = { 5, 2, 8, 10 };
    int* a = &arr[0];
    int* b = &arr[3];
    func1(a, b);


}

