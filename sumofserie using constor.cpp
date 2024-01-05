#include<iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of terms (N): ";
    cin >> N;

    double sum = 0.0;

    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
