#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int arr[100];

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 1) { cout << "HARD\n"; return 0; };
  }
  cout << "EASY\n";

  return 0;
}