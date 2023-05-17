#include <iostream>

#include "counter.h"

int main(int argc, char** argv) {
	std::list<int> li{ 4, 1, 3, 6, 25, 54 };

	for (auto n : li) {
		std::cout << n << ' ';
	}
	std::cout << std::endl;
	
	auto test = counter<int>(li);
	test();

	std::cout << "Sum: " << test.get_sum() << '\n'
		<< "Count: " << test.get_count() << std::endl;

	return 0;
}