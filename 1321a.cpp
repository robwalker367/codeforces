#include <iostream>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // read input
  int n;
  cin >> n;
  int robo[n], bionic[n];
  for (int i = 0; i < n; i++) cin >> robo[i];
  for (int i = 0; i < n; i++) cin >> bionic[i];

  // find rounds where robo beats bionic and vice versa
  int robo_wins = 0, bionic_wins = 0;
  for (int round = 0; round < n; round++) {
    if (robo[round] && !bionic[round]) robo_wins++;
    if (!robo[round] && bionic[round]) bionic_wins++;
  }

  if (!robo_wins) { 
    cout << -1 << "\n";
  } else {
    cout << ceil((float) (bionic_wins + 1) / robo_wins) << "\n";
  }

  return 0;
}