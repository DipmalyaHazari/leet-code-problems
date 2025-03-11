//Temprature conversion
#include <iostream>

int main() {

    double C=0,F=0;
    std::cout<<"Enter the temparature in celsius:";
    std::cin>>C;
    F=(C/5)*9+32;
    std::cout<<"Farenhite:"<<F;
    return 0;
}
