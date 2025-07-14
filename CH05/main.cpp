#include <iostream>

using namespace std;

int main() {

    int number;

    cin >> number;

    if (number % 2) {
        cout << "짝수입니다.\n" << endl;
    }
    else {
        cout << "홀수입니다.\n" << endl;
    }

    switch(number) {
        case 0:
        cout << "정수 0입니다." << endl;
        break;
        case 1:
        cout << "정수 1입니다." << endl;
        break;
        default:
        cout << "그 외의 숫자입니다." << endl;
        break; // 마지막은 생략 가능
    }



    return 0;
}

