/*#include<iostream>

using namespace std;

class Bank_account{

    int account,profit,capital;

    public:
    int total_profit(){
        return account*capital;
    }
    void setter (int acc, int pro){
        account = acc;
        profit = pro;

    }

};
int main(){
    Bank_account ban;
    ban.setter(2,4);
    cout<<ban.total_profit()<<endl;
}*/

#include <iostream>
#include <string>

using namespace std;
class BankAccount {
private:
  double account;
  double profit;
  double capital;

public:
  BankAccount() {
    account = 0.0;
    profit = 0.0;
    capital = 0.0;
  }

  void total_profit(std::string name) {
    // Your code for calculating total profit goes here
    // You can access account, profit, and capital variables inside this function
    std::cout << "Calculating total profit for " << name << std::endl;
    // Perform calculations and update profit accordingly
  }
};

int main() {
  BankAccount bank;
  std::string customerName = "JCR";
  bank.total_profit(customerName);

  return 0;
}
