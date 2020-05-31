#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <limits>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  int output[20000];
  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;
    vector<pair<char, int>> v;

    for (int j = 0; j < s.length(); j++) {
      char x = s[j];
      if (v.empty() || v.back().first != x) {
        v.push_back(make_pair(x, 1));
      } else {
        v.back().second++;
      }
    }

    int ans = INT_MAX;
    for (int i = 1; i < v.size() - 1; i++) {
      if (v[i-1].first != v[i+1].first) {
        ans = min(ans, v[i].second + 2);
      }
    }
    output[i] = (ans > s.length() ? 0 : ans);
  }

  for (int i = 0; i < t; i++) cout << output[i] << "\n";
  return 0;
}
