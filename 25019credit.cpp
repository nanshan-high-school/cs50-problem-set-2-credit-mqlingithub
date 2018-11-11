#include <iostream>
using namespace std;
void number(int);
int main() {
  long int cardnumber;
  cout << "請輸入信用卡號:\n";
  cin >> cardnumber;
  int a = cardnumber / 1000000000000000*2,
      x = cardnumber / 1000000000000000,
      y = cardnumber % 1000000000000000 / 10000000000000,
      b = cardnumber % 1000000000000000 / 100000000000000,
      c = cardnumber % 100000000000000 / 10000000000000 * 2,
      d = cardnumber % 10000000000000 / 1000000000000,
      e = cardnumber % 1000000000000 / 100000000000 * 2,
      f = cardnumber % 100000000000 / 10000000000,
      g = cardnumber % 10000000000 / 1000000000 * 2,
      h = cardnumber % 1000000000 / 100000000,
      i = cardnumber % 100000000 / 10000000 * 2,
      j = cardnumber % 10000000 / 1000000,
      k = cardnumber % 1000000 / 100000 * 2,
      l = cardnumber % 100000 / 10000,
      m = cardnumber % 10000 / 1000 * 2,
      n = cardnumber % 1000 / 100,
      o = cardnumber % 100 / 10 * 2,
      z = cardnumber % 10;
  number(a);
  number(c);
  number(e);
  number(g);
  number(i);
  number(k);
  number(m);
  number(o);
  int w = a + b + c + d + e + f + g + h + i + j + k + l + m + n + o % 10;
  if ( w != 0 ) w = 10 - w;
  if ( w == z ) {
    if ( x == 4 ) cout << "這是Visa card。";
    else if ( x == 5 && y <=55 && y >= 51 ) cout << "這是Master card。";
    else cout << "這是其他信用卡。";
  }
  else cout << "這是其他信用卡。";
}
void number(int number) {
  if ( number >= 10 ) {
    number = number / 10 + number % 10;
  }
}
