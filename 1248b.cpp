#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  deque<int> dq;
  for (int i=0; i<n; i++) {
    int t;
    cin >> t;
    dq.push_back(t);
  }

  sort(dq.begin(), dq.end());
  long long x = 0, y = 0;
  while (dq.size()) {
    x += dq.back();
    dq.pop_back();

    if (dq.size()) {
      y += dq.front();
      dq.pop_front();
    }
  }

  cout << x * x + y * y << "\n";
}