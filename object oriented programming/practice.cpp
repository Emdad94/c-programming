#include<stdio.h>
#include<iostream>

using namespace std;

class BankAccount{

    float profit;
    float balance;
    float profitrate;
    public:
    float calcprofit(int year)
    {
        profit =balance * profitrate * year;
        return profit;
    }
    void setValues(float pr, float b1)
    {
        balance = b1;
        profitrate = pr;
    }
    int getprofit()
    {
        return profit;
    }

};

int main(){
    BankAccount b1;
    b1.setValues(0.12,10000);
    cout<<b1.calcprofit(5);
}
    