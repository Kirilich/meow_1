#include <iostream>

int main(){
	int n, d;
	std::cout << "Input n: ";
	std::cin >> n;
	for(int i = 1; i <= n; i++){
		for(int g = 0; g < i; g++){
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
	return 0;
}


