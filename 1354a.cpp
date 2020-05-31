#include <iostream>
#include <cmath>
using namespace std;

int main() {
  // make cin and cout faster
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // get number of test cases
  int t;
  cin >> t;
  
  long long* output = new long long[t];

  for (int i = 0; i < t; i++) {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a <= b) { output[i] = b; continue; };
    if (c <= d) { output[i] = -1; continue; };

    output[i] = b + c * ceil((double) (a - b) / (c - d)); 
  }

  for (int i = 0; i < t; i++) {
    cout << output[i] << "\n";
  }

  return 0;
}
