#include <iostream>
#include <string>
int main(int numbargs, char *var1[]) {
  bool isIt3Args {numbargs==3} ;
  if (isIt3Args) {
    std::string var2{var1[0]};
    auto var3{*(var1[1])};
    auto var4{var2.size()};
    auto var5{std::atoi(var1[2])};
    auto var6{0};
    auto var7{0};
    std::string var8{var1[1]};
    while (true) {
      var6 += var8[var7++];
      if (var7 >= static_cast<int>(var8.size())) {
        break;
      }
    }
    if ((var6 ^ var3 * 3) << (var4 & 0x1f) == var5) {
      std::cout << "Correct!" << std::endl;
    } else {
      std::cout << "Wrong!" << std::endl;
    }
  }
}