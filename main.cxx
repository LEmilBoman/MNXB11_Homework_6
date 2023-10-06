#include <iostream>
#include <string>
int string_to_checksum(std::string s){
  int res {0};
  for (char c: s){
    res += c;
  }
  return res;
}
int main(int numbargs, char *argslist[]) {
  bool isIt3Args {numbargs==3} ;
  if (isIt3Args) {
    std::string exeName{argslist[0]};
    auto FirstCharInArg1{*(argslist[1])};
    auto exeNameSize{exeName.size()};
    int IntVerArg2{std::atoi(argslist[2])};

    std::string Arg1{argslist[1]};
    int checksumArg1 {string_to_checksum(Arg1)};
    
    if ((checksumArg1 ^ FirstCharInArg1 * 3) << (exeNameSize & 0x1f) == IntVerArg2) {
      std::cout << "Correct!" << std::endl;
    } else {
      std::cout << "Wrong!" << std::endl;
    }
  }
}