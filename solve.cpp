#include "iostream"
#include "math.h"
#include <algorithm>
#include <climits>
#include <iomanip>
#include <ios>

using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  if (n == 2)
    cout << "NO";
  else if (n % 2 == 0 && (n - 2) % 2 == 0 && (n - (n - 2)) % 2 == 0)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
