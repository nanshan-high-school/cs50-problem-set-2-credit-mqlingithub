#include <iostream>
using namespace std;
int main() {
  long int cardnumber;
  cout << "請輸入信用卡號:\n";
  cin >> cardnumber;
  long int card1 = cardnumber, card2 = cardnumber / 10, total = 0,checknumber;
  for ( int a = 0 ; a < 8; a++ ) {
    int number = card1 % 10;
    card1 = card1 / 100;
    total = total + number;
  }
  for ( int a = 0 ; a < 8 ; a++ ) {
    int number = card2 % 10;
    card2 = card2 / 100;
    if ( number > 4 ) {
      number = number * 2 / 10 + number * 2 % 10;
    }
    else {
      number = number * 2;
    }
    total = total + number;
  }
  for ( int a = 0 ; a < 15 ; a++ ) {
    cardnumber = cardnumber / 10;
  }
  if (total % 10 == 0) {
    checknumber = 0;
  }
  else {
    checknumber = 10 - total % 10;
  }
  if ( ( total + checknumber ) % 10 == 0 ) {
    if ( cardnumber == 4 ) cout << "這是Visa card。";
    else if ( cardnumber == 5 ) cout << "這是Master card。";
    else cout << "這是其他信用卡。";
  }
  else cout << "這是其他信用卡。\n";
}
