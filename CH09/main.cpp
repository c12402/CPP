#include <iostream>

using namespace std;

int Add(int a, int b) { // 선언과 정의 분리 가능
    return a + b;
}

void Add(int a, int b, int *c, int *d) { // 반환 자료형이 지정되지 않았음
    *c = a + b;
    *d = a - b;
}

int main() {
    cout << Add(1, 2) << endl;

    int sum;
    int sub;
    Add(4, 5, &sum, &sub);

    cout << sum << endl;

    return 0;
}

