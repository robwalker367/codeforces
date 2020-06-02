#include <iostream>
#include <bitset>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    bitset<100> output; 
    for (int i = 0; i < t; i++) {
        int n, x;
        cin >> n >> x;
        if (x == 0) { output[i] = 1; continue; };

        int evens = 0, odds = 0;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a; 
            if (a % 2) odds++; else evens++;
        }

        if (odds < 1) {
            output[i] = 0;
            continue;
        } else if (evens >= x - 1) { 
            output[i] = 1; 
            continue;
        } else if ((x - evens) % 2 && (x - evens) <= odds) {
            output[i] = 1;
            continue;
        } else if ((x - evens) % 2 == 0 && evens >= 1 && (x - evens) <= odds - 1) {
            output[i] = 1;
            continue;
        } else {
            output[i] = 0;
            continue;
        }
    }

    for (int i = 0; i < t; i++) {
        cout << (output[i] ? "Yes" : "No") << "\n";
    }
    return 0;
}
