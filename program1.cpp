#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream testFileM;
    ifstream testFileP;
    int maxProfit = 0;
    map<string, int> mPrice{};
    map<string, int> pPrice{};

    for(int i = 1; i<argc;i++ ){
        string arg = argv[i];
        if (arg=="-m"){
          string arg2 = argv[i+1];
          testFileM.open(arg2.c_str());
          if(testFileM.fail){
            break;
          }
          else{
            mPrice = maker(arg2.c_str());
          }
        }
        if (arg=="-p"){
          string arg2 = argv[i+1];
          testFileP.open(arg2.c_str());
          if(testFileP.fail){
            break;
          }
        }
    }

}
