#include "all.h"

int multiply(int x, int y){
    return x * y;
}

std::string plus_str(std::string x, std::string y){
    return x + " "s + y;
}

int main(){
    std::cout << multiply(3, 4) << "\n"s;
    std::cout << plus_str("hoge", "huga") << "\n"s;
}
