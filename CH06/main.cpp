#include <iostream>

using namespace std;

int main() { 
// for    
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    int my_array[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    for (int i = 0; i < sizeof(my_array) / sizeof(int); i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;

    char my_string[] = "Hello\0 World!";
    for (int i = 0; i < sizeof(my_string); i++) {
        if ( my_string[i] == '\0')
            break;
        cout << my_string[i];    
    }
    cout << endl;
// while
    int i = 0;
    while (i < 10) {
        cout << i << " ";
    }
    cout << endl;

    while (true) { // true == 1, for( ;true; )
        cout << i << " ";
        i++;
        if (i == 10)
            break;
    }
    cout << endl;

    i = 0;
    while (i < sizeof(my_string) && my_string[i] != '\0') {
        cout << my_string[i];
        i++;
    }
    cout << endl;

    return 0;
}