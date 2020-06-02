#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

// Calcs minimum cost for making s a valid string (no 010 or 101 substr's)
int solve(string s) {
    int n = s.length();

    // find total zeros and total ones in string
    int total_zeros = 0, total_ones = 0;
    for (char x : s) {
        if (x == '0') {
            total_zeros++;
        } else {
            total_ones++;
        }
    }

    // calculate costs to make valid string
    int cost_zeros_lead[n], cost_ones_lead[n];
    int zeros_seen = 0, ones_seen = 0;
    for (int i = 0; i < n; i++) {
        cost_zeros_lead[i] = total_zeros - zeros_seen + ones_seen;
        cost_ones_lead[i] = total_ones - ones_seen + zeros_seen;
        if (s[i] == '0') {
            zeros_seen++;
        } else {
            ones_seen++;
        }
    }

    // return minimum cost
    int min1 = *min_element(cost_zeros_lead, cost_zeros_lead + n);
    int min2 = *min_element(cost_ones_lead, cost_ones_lead + n);
    return min(min1, min2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    int output[100];
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        output[i] = solve(s);
    }

    for (int i = 0; i < t; i++) {
        cout << output[i] << "\n";
    }

    return 0;
}
