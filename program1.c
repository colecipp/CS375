#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    char *MarketPriceFile = malloc(4);
    char *PriceListFile = malloc(4);
    int *ptr;
    *MarketPriceFile = argv[1];
    *PriceListFile = argv[2]; /* should check that argc > 1 */
    FILE* file1 = fopen(MarketPriceFile, "r");
    FILE* file2 = fopen(PriceListFile, "r"); /* should check the result */
    char *line[] = malloc(8);
    ptr = (int*)malloc(n * sizeof(int));
    printf("epic");

    while (fgets(line, sizeof(line), file1)) {
      ptr[sizeof(line)] = sizeof(line)+1;
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
