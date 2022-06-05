#include <iostream>
using namespace std;

int selectItem(int coin){
    int item;
    int price[5] = {2,1,1,3,2};

    cout << "Please select the items (1, 2, 3, 4, 5):\n";
    cin >> item;

    if(item > 5 || item < 1){
        cout << "Opps! You have entered wrong item!";
    }

    else {
        cout << "You have entered item " << item << " with price RM" << price[item-1] << "\n";

        // calculate to get balance
        int balance = 0;

        balance = coin - price[item-1];

        cout << "Your balance is RM" << balance << "\n";
    }

    return 0;
}

int main() {

    int coin;

  cout << "Please insert coin (1, 5, 10):\n";
  cin >> coin;

  if(coin == 1 || coin == 5 || coin == 10){
    selectItem(coin);
  }

  else {
    cout << "Upps! You must entered 1, 5 & 10.";
  }

  return 0;
}
