#include "iostream"
#include "math.h"
#include <algorithm>
#include <climits>
#include <ios>
#include <string>

using namespace std;

int a[100001];


int main (int argc, char *argv[]) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int a, b; cin >> a >> b;
  int i = 0;
  while (true) 
  {
    if (a <= b) 
    {
      a *= 3;
      b *= 2;
      i++;
    }
    else 
    {
      cout << i;
      break;
    }
  }

  return 0;
}
