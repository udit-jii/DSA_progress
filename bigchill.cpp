#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void saydigit(int n) {
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<int> num;

    if (n == 0) {
        cout << arr[0];
        return;
    }

    while (n != 0) {
        num.push_back(n % 10);
        n /= 10;
    }

    reverse(num.begin(), num.end());

    for (int i = 0; i < num.size(); i++) {
        cout << arr[num[i]];
        if (i != num.size() - 1)
            cout << " ";
    }
}

int main() {
    int num = 3580;
    saydigit(num);
    return 0;
}
