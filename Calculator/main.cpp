#include <iostream>
#include <stack>
using namespace std;







int main() {

    stack<char> s = {};
    char input[20] = {};
    cin >> input;

    for (int i = 0; input[i] != '\0'; i++) {
        s.push(input[i]);
        if (s.top() == ' ') s.pop();
    }

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;




    return 0;
}