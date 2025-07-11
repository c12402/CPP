#include <iostream>

using namespace std;

int main() {
    char user_input[100];

    cout << "원하는 문장을 입력해주세요. " << endl;
    cout << "입력 : ";

    cin >> user_input; // 빈칸은 예외로 적용
    cin.getline(user_input, sizeof(user_input)); // 빈칸도 글자로 적용 but 배열에만 저장 가능

    cout << "메아리 : " << user_input << endl; 

    int number = -1;

    cin >> number;
    cout << number << endl;

    

    return 0;
}