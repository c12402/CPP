#include <iostream>
using namespace std;

const int kMaxStr = 100;

bool IsEqual(const char *str1, const char *str2) {
    
    // cout << sizeof(str1) << " " << sizeof(str2) << endl;
    // exit(-1);

    for (int i = 0; i < kMaxStr; i++) {
        if (str1[i] != str2[i])
            return false;
        if (str1[i] == '\0') // 문자열 마지막에는 null이 들어있음
            return true;    
    }    
    return true;
}

int main() {
    const char str1[kMaxStr] = "stop";
    
    while(1) {
        char str2[kMaxStr];
        cin >> str2;

        if(IsEqual(str1, str2)) {
            cout << "종료됩니다" << endl;
        }
        else {
            cout << "계속합니다" << endl;
        }
    }

    return 0;
}