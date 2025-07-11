#include <iostream>

using namespace std;

int main() {
    int i;
    i = 123;

    cout << i << " " << sizeof(i) << endl;

    float f = 123.456f; // 마지막 f 주의
    double d = 123.456; // f 불필요

    cout << f << " " << sizeof(f) << endl;
    cout << d << " " << sizeof(d) << endl;

    // C++는 글자 하나와 문자열을 구분
    char c = 'a';
    char str[] = "Hello, World!"; // std::string

    cout << c << " " << sizeof(c) << endl; // a 1

    return 0;
}