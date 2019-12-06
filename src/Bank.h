#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED
#include<vector>

/* realisation of bank work*/
class Bank
{
private:
    std::vector<struct deposit> deposits;        // deposits in bank
    std::vector<struct stock> stocks;            // sold bank's stocks
    std::vector<struct obligation> obligations;  // ..........obligations

    float money;                        //all bank's money
    int amount_of_stocks;             //amount of sold bank's stocks
    int amount_of_obligations;        //...................obligations

    float min_stock_price;              // minimal stock price
    float min_obligation_price;         //.......obligation....
public:
    Bank();              // class constructor by default

    void make_deposit(); // with a certain probability the bank can receive a deposit
    void pass_year(); // random changes in bank finances in a year
    void buy_and_sell_securities(); // buy or sell securities
    void add_stock(); // sell a stock to investor
    void add_obligation(); // sell an obligation to investor
    void erase_stock();    // buy back (with a certain probability) a stock from investor
    void erase_obligation(); // buy back (with a certain probability) an obligation from investor
    void update_securities_prices(); // update prices on securities
    std::vector<struct bank_info> get_report_per_n_years(int n); // get result of bank working n years, returns vector of bank states

};   // random strategy described below is unprofitable (tested)
#endif // BANK_H_INCLUDED