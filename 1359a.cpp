#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    int output[500];
    for (int i = 0; i < t; i++) {
        int n, m, k;
        cin >> n >> m >> k;

        int hand_size = n / k;
        if (m <= hand_size) { output[i] = m; continue; };
        int jokers_remaining = m - hand_size;
        int next_most_jokers = ceil((float) jokers_remaining / (k - 1));
        output[i] = hand_size - next_most_jokers;
    }

    for (int i = 0; i < t; i++) {
        cout << output[i] << "\n";
    }
    return 0;
}
