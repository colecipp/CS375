#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    ifstream testFile1("MarketPriceFile");
    ifstream testFile2("PriceListFile");
    string line1;
    string line2;
    int maxProfit = 0;

    while(getline(testFile2, line1)){

        string card1;
        int price;
        stringstream s(line1);
        s >> card1;
        s >> price;
        while(getline(testFile1, line2)){

            string card2;
            int worth;

            std::replace(line2.begin(), line2.end(), ',', ' ');

            stringstream ss(line2);

            ss >> card2;
            ss >> worth;
            //std::string::npos == card2.find_first_of(card1)&&
            if ((std::string::npos == card2.find_first_of("0123456789"))) {

              cout << "Name:" << card2 << " ";
              cout << "Cost: " << worth << " ";
              cout << "Price: " << price << " ";
              cout << '\n';

            }

        }
        // std::replace(line1.begin(), line1.end(), ',', ' ');

        // stringstream ss(line1);

        // if (std::string::npos == card1.find_first_of("0123456789")) {
        //   cout << "Name:" << card1 << " ";
        //   cout << "Cost: " << price << " ";
        //   cout << '\n';
        //
        // }

    }
    // while(getline(testFile1, line)){
    //
    //     string card;
    //     int worth;
    //
    //     std::replace(line.begin(), line.end(), ',', ' ');
    //
    //     stringstream ss(line);
    //
    //     ss >> card;
    //     ss >> worth;
    //
    //     if (std::string::npos == card.find_first_of("0123456789")) {
    //       cout << "Name:" << card << " ";
    //       cout << "Cost: " << worth << " ";
    //       cout << '\n';
    //
    //     }
    //
    // }
}
// COMPUTEMAXPROFIT (I, W)
//   maxProfit = 0;
//   S = the empty set;
//   M = the empty set;
//   if the sum of the weights in I <= W
//     return the profit of the items in I, and I;
//   while more subsets to generate
//     if the sum of the weights in S <= W
//       if the profit of the items in S > maxProfit
//         update maxProfit;
//         copy S to M;
//     generate the next subset S;
// return maxProfit and M;
    /* checking if a substring is in a string */
// if(strstr(string, substring) != NULL) {
//     /* ... */
// }
