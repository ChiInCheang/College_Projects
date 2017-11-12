#include <iostream>
#include <array>
#include <string>

void get_sales(std::string & div_repo[], double & sales_repo[]){
    std::cout << "How many divisions will be saved?: ";
    unsigned div_num {0};
    std::cin >> div_num;
    if (div_num < 0){
        if (div_num == 0){
            std::cout << "You have entered a value of 0" << std::endl;
            // Exit the program if this line is reached
        }else {
            std::cout << "The value entered cannot be less than 0" << std::endl;
            // Exit the program if this line is reached
        }
    }
}

int main(){
    std::string divs[10];
    double sales[10];
    get_sales(divs, sales);

    return 0;
}
