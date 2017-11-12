#include <iostream>
#include <array>
#include <string>

const unsigned int ARR_SIZE = 10;

void get_sales (std::string div_repo[], double sales_repo[]) {
	std::cout << "Note: The size of the Array is 10" << std::endl;
	std::cout << "How many divisions will be saved?: ";
	unsigned div_num;
	std::cin >> div_num;
	if (div_num< 0) {
		if (div_num == 0) {
			std::cout << "You have entered a value of 0" << std::endl;
			exit (EXIT_SUCCESS);
		}
		else {
			std::cout << "The value entered cannot be less than 0" << std::endl;
			exit (EXIT_FAILURE);
		}
	}
}

int main () {
	std::string divs[ARR_SIZE];
	double sales[ARR_SIZE];
	get_sales (divs, sales);

	return 0;
}