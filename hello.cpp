#include <iostream>
using namespace std;

int function(int a, int b) {
    int c = a + b;
    return c;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int result = function(a, b);
    cout << "The result is: " << result << std::endl;

    return 0;
}
