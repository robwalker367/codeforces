#include <iostream>
using namespace std;

int MAX_SMALL_PORTION = 33;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int small = 3, large = 7;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int chunk = 0; chunk < n; chunk++) {
    bool can_buy = false;
    for (int i = 0; i < MAX_SMALL_PORTION; i++) {
      int x = arr[chunk];
      if (small * i > x) break;
      if ((x - small * i) % large == 0) {
        can_buy = true;
        break;
      }
    }
    cout << (can_buy ? "YES\n" : "NO\n");
  }
  return 0;
}