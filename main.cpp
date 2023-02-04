#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int a, b;
    char key;
    string str;

    cin >> a >> b >> key;
    getline(cin, str);

    int arr[200] = {};
    arr[1] = a;
    arr[2] = b;

    for(int i = 3; i <= 20; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    } 

    for(int i = 21; i < sizeof(arr)/sizeof(int); i++) {
        arr[i] = arr[i % 20];
    }

    key -= 'a';

    for(int i = 1; i < str.size(); i++) {
        int now = key + arr[i];
        now = now % 26;
        now += 'a';

        cout << str[i] + 3 * now << ' ';
    }
}
