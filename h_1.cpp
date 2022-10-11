#include <iostream>

int main(){
	int n, d;
	std::cout << "Input n: ";
	std::cin >> n;
	for(int i = 0; i < n; i++){
		d = (2*i + 1)/2;
		for(int t = 0; t < 2*n + 1; t++){
			if(t >= (2*(n - 1) + 1)/2 - d && t <= (2*(n - 1) + 1)/2 + d) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}


