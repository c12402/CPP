#include <iostream>

using namespace std;

int main() {
    int a = 123;

    cout << a << " " << &a << endl; // address of 주소 연산자 & ampersand

    int *b = &a; // b에 a 주소 대입

    cout << *b << endl;

    *b = 567;

    cout << a << " " << b << " " << *b << endl;

    double *c = nullptr; // 아무 주소도 가리키고 있지 않다는 의미로 사용

    cout << sizeof(int) << " " << sizeof(double) << endl;
    cout << sizeof(int *) << " " << sizeof(double *) << endl;
    cout << sizeof(b) << " " << sizeof(c) << endl;

    cout << sizeof(size_t) << endl;
    cout << size_t(b) << " " << size_t(b + 1) << " " << size_t(b + 2) << endl;
    cout << size_t(c) << " " << size_t(c + 1) << " " << size_t(c + 2) << endl;

    int my_array[] = {23, 38, 56, 69, 74};

    char my_str[] = {'h', 'e', 'l', 'l', 'o'};
    char *ptr = my_str;

    cout << *(ptr + 3) << endl;

    return 0;
}