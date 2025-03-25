#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    if (n == 0)
        return 0;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int N = 10; 
    cout << "Sum of first " << N << " natural numbers: " << sumOfNaturalNumbers(N) << endl;
    return 0;
}
