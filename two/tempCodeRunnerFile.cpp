#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool isPalindrome(long long num) {
    string str = to_string(num);
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

long long maxPalindromicCube(long long N) {
    long long max_palindrome_cube = 0;
    long long root = pow(N, 1.0 / 3); // Cube root of N
    for (long long x = 1; x <= root; ++x) {
        long long cube = x * x * x;
        if (isPalindrome(cube) && cube <= N) {
            max_palindrome_cube = max(max_palindrome_cube, cube);
        }
    }
    return max_palindrome_cube;
}

int main() {
    long long N;
    //cout << "Enter a positive integer not greater than 10^18: ";
    cin >> N;
    long long result = maxPalindromicCube(N);
    //cout << "Maximum palindromic cube not greater than " << N << " is: " << result << endl;
    cout<<result<<endl;
    return 0;
}
