#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    char *MarketPriceFile = malloc(4);
    char *PriceListFile = malloc(4);
    // char *line;
    // int n;
    MarketPriceFile = argv[1];
    PriceListFile = argv[2]; /* should check that argc > 1 */
    FILE* file1 = malloc(16);
    FILE* file2 = malloc(16);
    file1 = fopen(MarketPriceFile, "r");
    file2 = fopen(PriceListFile, "r"); /* should check the result */
    // line = (char*)malloc(n * sizeof(int));
    char line[50];
    printf("epic");

    while (fgets(line, sizeof(line), file1)) {
        /* note that fgets don't strip the terminating \n, checking its
           presence would allow to handle lines longer that sizeof(line) */
      printf("%s", line);
    }
    /* may check feof here to make a difference between eof and io failure -- network
       timeout for instance */

    fclose(file1);

    return 0;
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
