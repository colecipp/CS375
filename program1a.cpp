#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    ifstream testFile("MarketPriceFile");
    string line;

    while(getline(testFile, line)){

        string card;
        int worth;

        std::replace(line.begin(), line.end(), ',', ' ');

        stringstream ss(line);

        ss >> card;
        ss >> worth;


        cout << "Name:" << card << " ";
        cout << "Cost: " << worth << " ";

        cout << '\n';
    }
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
