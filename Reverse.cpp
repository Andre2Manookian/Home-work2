#include <iostream>
using namespace std;


string reverseString(string str) {
    if (str.empty())
        return "";
    return str.back() + reverseString(str.substr(0, str.size() - 1));
}

int main() {
    string str = "hello";
    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}
