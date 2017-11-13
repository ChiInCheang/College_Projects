#include <iostream>
#include <array>

const unsigned int ARR_SIZE = 10;

void get_sales(std::string division_repo[], double quarter_profits_repo[], unsigned &division_count) {

	std::cout << "Note: The size of the Array is 10" << std::endl;
	std::cout << "How many divisions will be saved?: ";
	std::cin >> division_count;

	if (division_count <= 0 || division_count > ARR_SIZE) {
		if (division_count == 0) {
			std::cout << "You have entered a value of 0" << std::endl;
			exit(EXIT_SUCCESS);
		} else {
			std::cout << "The value entered cannot be evaluated." << std::endl;
			exit(EXIT_FAILURE);
		}
	} else {
		unsigned counter{1};
		unsigned tries{1};
		std::string div_name;
		double div_sales{0};

		while (counter <= division_count) {

			std::cin.ignore();
			std::cout << "Enter the name of the division: " << counter;
			std::getline(std::cin, div_name);
			enter_sales:
			std::cout << "Enter the sale's value of the division: " << counter;
			std::cin >> div_sales;

			if (div_sales < 0) {
				std::cout << "Invalid input" << std::endl;
				std::cout << "Press any key to continue: ";
				std::cout << "Tries: " << tries << std::endl;

				if (tries >= 3) {
					std::cout << "The program has ended." << std::endl;
					exit(EXIT_SUCCESS);
				}

				std::cin.ignore();
				std::cin.get();
				std::cout << "Try again: ";
				tries++;
				goto enter_sales;
			}

			division_repo[counter - 1] = div_name;
			quarter_profits_repo[counter - 1] = div_sales;
			counter++;
		}
	}
}

void get_highest(std::string divs[], double div_sales[], unsigned list_size) {
	if (divs != nullptr && div_sales != nullptr) {
		double current{0};
		double next{0};

		std::string current_name;
		std::string next_name;


		for (int index = 0; index < list_size; index++) {
			for (int index_t = 0; index_t < list_size - 1; index_t++) {
				if (div_sales[index_t] > div_sales[index_t + 1]) {
					current = div_sales[index_t];
					next = div_sales[index_t + 1];
					div_sales[index_t + 1] = current;
					div_sales[index_t] = next;
					current_name = divs[index_t];
					next_name = divs[index_t + 1];
					divs[index_t + 1] = current_name;
					divs[index_t] = next_name;
				} else {
					continue;
				}
			}

			if (index == list_size - 1) {
				printf("Highest Grossing Division: %s: \t $%.f \n", divs[index].c_str(), div_sales[index]);
			}
		}

		std::cout << "Program ended." << std::endl;

	} else {
		std::cout << "The repository is empty. " << std::endl;
		exit(EXIT_FAILURE);
	}
}

int main() {
	std::string divs[ARR_SIZE];
	double sales[ARR_SIZE];
	unsigned list_size;
	get_sales(divs, sales, list_size);
	get_highest(divs, sales, list_size);

	return 0;
}