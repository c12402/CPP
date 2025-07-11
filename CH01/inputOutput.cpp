#include <iostream> // iostream이라는 헤더를 포함

using namespace std; // 네임스페이스설명 std::cout

int main() { // entry point
	cout << "Hello World" << endl;
	//printf("Hello World by printf");

    char user_input[100];
    cin >> user_input;
    cout << user_input;

	return 0; // OS에게 프로그램 종료를 알려주는 역할
}
