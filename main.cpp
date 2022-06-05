#include <iostream>
using namespace std;

int selectItem(int coin){
    while(1){
       int item;
       int price[5] = {2,1,1,3,2};

       cout << "Please select the items (1, 2, 3, 4, 5):\n";
       cin >> item;

       if(item > 5 || item < 1){
         cout << "Opps! You have entered wrong item!\n\n";
       }

       else {
         cout << "You have entered item " << item << " with price RM" << price[item-1] << "\n";

         // calculate to get balance
         int balance = 0;

         balance = coin - price[item-1];

         cout << "Your balance is RM" << balance << "\n\n";
         break;
       }
    }
    return 0;
}

int main() {
  int totalCoin = 0;

  while(1){
    int coin;
    int confirmation;

    cout << "Please insert coin (1, 5, 10): ";
    cin >> coin;

    if(coin == 1 || coin == 5 || coin == 10){
      totalCoin += coin;
      cout << "\nMESSAGE FROM VENDING MACHINE\n";
      cout << "==================================\n";
      cout << "Your current inserted coin is: RM" << totalCoin << "\n\n";

      cout << "Do you want to insert coin again? no = 0, yes = 1\n";
      cin >> confirmation;

      if(confirmation == 0){
        selectItem(totalCoin);
      }
    }

    else {
      cout << "Upps! You must entered 1, 5 & 10.\n\n";
    }
  }

  return 0;
}
