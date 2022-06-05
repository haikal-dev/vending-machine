#include <iostream>
using namespace std;

int main() {

    int coin;

  cout << "Please insert coin (1, 5, 10):\n";
  cin >> coin;

  if(coin == 1 || coin == 5 || coin == 10){
    cout << "OK! Please select the items:\n";
  }

  else {
    cout << "Upps! You must entered 1, 5 & 10.";
  }

  return 0;
}
