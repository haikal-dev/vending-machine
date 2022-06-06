#include <iostream>
using namespace std;

int selectItem(int coin){
    int balance = coin;

    while(1){
       int item;
       int price[5] = {2,1,1,3,2};
       int confirmation;
       string quitConfirmation;

       cout << "Please select the items (1, 2, 3, 4, 5)\n\n";
       cout << "(1) Milo RM2\n";
       cout << "(2) Waffle RM1\n";
       cout << "(3) Mentos RM1\n";
       cout << "(4) Maggi Cup RM3\n";
       cout << "(5) Nescafe RM2\n\n";
       cout << "Select item: ";
       cin >> item;

       if(item > 5 || item < 1){
         cout << "\n\nMESSAGE FROM VENDING MACHINE\n";
         cout << "==================================\n";
         cout << "Opps! You have entered wrong item!\n\n";
       }

       else {
         cout << "\n\nMESSAGE FROM VENDING MACHINE\n";
         cout << "==================================\n";
         cout << "You have entered item " << item << " with price RM" << price[item-1] << "\n";

         balance = balance - price[item-1];

         cout << "Your balance is RM" << balance << "\n\n";
         cout << "You want to buy it more? No - 0, Yes - 1\n";
         cin >> confirmation;

         if(confirmation == 0){
            cout << "Okay! Your balance is RM" << balance << ". Please take your balance!\n";
            cout << "Press Q and enter to quit! ";
            cin >> quitConfirmation;

            if(quitConfirmation == "q"){
                break;
            }

            else {
                continue;
            }
         }
         else if(confirmation == 1) {
            continue;
         }

         else {
            break;
         }
       }
    }
    return 0;
}

int main() {
  int totalCoin = 0;

  while(1){
    int coin;
    int confirmation;

    cout << "\n\nMESSAGE FROM VENDING MACHINE\n";
    cout << "==================================\n";
    cout << "Please insert coin (1, 5, 10): ";
    cin >> coin;

    if(coin == 1 || coin == 5 || coin == 10){
      totalCoin += coin;
      cout << "\n\nMESSAGE FROM VENDING MACHINE\n";
      cout << "==================================\n";
      cout << "Your current inserted coin is: RM" << totalCoin << "\n\n";

      cout << "Do you want to insert coin again? no = 0, yes = 1\n";
      cin >> confirmation;

      if(confirmation == 0){
        selectItem(totalCoin);
      }

      else if(confirmation == 1){
        continue;
      }

      else {
        break;
      }
    }

    else {
      cout << "Upps! You must entered 1, 5 & 10.\n\n";
    }
  }

  return 0;
}
