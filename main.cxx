#include <iostream>
#include <string>
int main(int numbargs, char *argslist[]) {
  bool isIt3Args {numbargs==3} ;
  if (isIt3Args) {
    std::string exeName{argslist[0]};
    auto FirstCharInArg1{*(argslist[1])};
    auto exeNameSize{exeName.size()};
    int IntVerArg2{std::atoi(argslist[2])};
    auto var6{0};
    auto var7{0};
    std::string Arg1{argslist[1]};
    while (true) {
      var6 += Arg1[var7++];
      if (var7 >= static_cast<int>(Arg1.size())) {
        break;
      }
    }
    if ((var6 ^ FirstCharInArg1 * 3) << (exeNameSize & 0x1f) == IntVerArg2) {
      std::cout << "Correct!" << std::endl;
    } else {
      std::cout << "Wrong!" << std::endl;
    }
  }
}