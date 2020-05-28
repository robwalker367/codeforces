#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  int r = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    r += x;
    cout << r / m << ' ';
    r %= m;
  }
  cout << "\n";
}