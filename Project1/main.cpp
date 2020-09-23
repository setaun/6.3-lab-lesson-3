#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // initializes variables 
    string companyName;
    int numShares;
    double purchasePrice;
    double salePrice;
    const double comPerc = 0.035;

    //asks user for name of company and stores it in a string
    cout << "Enter the name of the company" << endl;
    getline(cin, companyName);

    //asks user for number of shares of stock and stores it
    cout << "Enter shares of stock" << endl;
    cin >> numShares;

    //prompts user to enter a purchase price and stores it
    cout << "Enter purchase price" << endl;
    cin >> purchasePrice;

    //prompts user to enter a sales price and stores it
    cout << "Enter sale price" << endl;
    cin >> salePrice;

    cout << endl; // creates a space between the outputs

    // initializes variables of other variables
    double costOfStock = purchasePrice * numShares;
    double stockIncome = salePrice * numShares;
    double totalCost = costOfStock + (costOfStock * comPerc);
    double totalIncome = stockIncome - (stockIncome * comPerc);

    cout << fixed << setprecision(2); // sets it so only 2 decimal places are used
    cout << "Company: " << companyName << endl; // displays company
    cout << "Shares: " << numShares << endl << endl; // displays share amount & creates a blank line before next output

    /* displays purchase information including the total cost, number of shares, percentage taken by the stockbroker
       and the cost of the stock itself. Also creates an blank line before the next output */
    cout << "Purchase/share: $" << purchasePrice << endl;
    cout << "Cost of stock: $" << costOfStock << endl;
    cout << "Cost of commission: $" << costOfStock * comPerc << endl;
    cout << "Total cost: $" << totalCost << endl;
    cout << endl;

    /* displays sale info including total income made, stockbroker commission charge, income made before the stockbroker takes
    a cut and the price each share was sold for. Also creates new line before next output */
    cout << "Sale/share: $" << salePrice << endl;
    cout << "Income from stock: $" << stockIncome << endl;
    cout << "Cost of commission: $" << stockIncome * comPerc << endl;
    cout << "Total income: $" << totalIncome << endl << endl;

    //displays if the user gained or lost money and by how much
    cout << "Gain or loss: $" << totalIncome - totalCost << endl;
    return 0;
}