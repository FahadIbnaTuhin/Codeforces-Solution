#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  // the formula for the summation of numbers from 1 to n is = n * (n + 1) / 2
  // in the worst case, n = 10^9
  // so sum = 10^9 * (10^9 + 1) / 2 = around 10^18 / 2
  // and we can't store it in int, so we need long long here
//   long long sum = 0;

  // we need to typecast in the right hand side as otherwise the right hand side will overflow
  long long sum = (long long) n * (n + 1) / 2;
  cout << sum << '\n'; // always output a newline at the end of the output file


  // sum = 0;
  // for (int i = 1; i <= n; i++) {
  //   sum += i;
  // }
  // cout << sum << '\n';
  //
  // this is also correct
  // but it will give you time limit exceeded verdict
  // as in the worst case, n = 10^9 and then the loop will run 10^9 times
  // in general it takes around 1s to run 10^8 operations (loops/additions/etc)
  // so it will take around 10s to run 10^9 operations
  // but the time limit in the problem is 0.25s
  // thats why it will give you TLE
  // note that you should ALWAYS understand why your code gives TLE
  return 0;
}