#include <iostream>
#include <string>
int main(int numbargs, char *argslist[]) {
  bool isIt3Args {numbargs==3} ;
  if (isIt3Args) {
    std::string exeName{argslist[0]};
    auto FirstCharInArg1{*(argslist[1])};
    auto var4{exeName.size()};
    auto var5{std::atoi(argslist[2])};
    auto var6{0};
    auto var7{0};
    std::string var8{argslist[1]};
    while (true) {
      var6 += var8[var7++];
      if (var7 >= static_cast<int>(var8.size())) {
        break;
      }
    }
    if ((var6 ^ FirstCharInArg1 * 3) << (var4 & 0x1f) == var5) {
      std::cout << "Correct!" << std::endl;
    } else {
      std::cout << "Wrong!" << std::endl;
    }
  }
}