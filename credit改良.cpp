#include <iostream>
using namespace std;
void check(int);
void divide(int);
int main() {
  long int cardnumber;
  cout << "請輸入信用卡號:\n";
  cin >> cardnumber;
  divide(cardnumber);
  int sixteenth = cardnumber;
  divide(cardnumber);
  int fifteenth = cardnumber;
  divide(cardnumber);
  int fourteenth = cardnumber;
  divide(cardnumber);
  int thirteenth = cardnumber;
  divide(cardnumber);
  int twelveth = cardnumber;
  divide(cardnumber);
  int eleventh = cardnumber;
  divide(cardnumber);
  int tenth = cardnumber;
  divide(cardnumber);
  int ninth = cardnumber;
  divide(cardnumber);
  int eighth = cardnumber;
  divide(cardnumber);
  int seventh = cardnumber;
  divide(cardnumber);
  int sixth = cardnumber;
  divide(cardnumber);
  int fifth = cardnumber;
  divide(cardnumber);
  int fourth = cardnumber;
  divide(cardnumber);
  int third = cardnumber;
  int firsttwo = cardnumber;
  divide(cardnumber);
  int second = cardnumber;
  divide(cardnumber);
  int first = cardnumber;
  int first1 = cardnumber;
  check(first);
  check(third);
  check(fifth);
  check(seventh);
  check(ninth);
  check(eleventh);
  check(thirteenth);
  check(fifteenth);
  int total = first + second  + third + fourth + fifth + sixth + seventh + eighth + ninth + tenth + eleventh + twelveth + thirteenth + fourteenth + fifteenth + sixteenth;
  if ( total % 10 == 0 ) {
    if ( first1 == 4 ) cout << "這是Visa card。";
    else if ( first1 == 5 && firsttwo <= 55 && firsttwo >= 51 ) cout << "這是Master card。";
    else cout << "這是其他信用卡。";
  }
  else cout << "這是其他信用卡。\n";
}
void check(int number) {
  if ( number * 2 >= 10 ) {
    number = number / 10 + number % 10;
  }
  else number = number * 2;
}
void divide(int number) {
  number = number % 10;
}
