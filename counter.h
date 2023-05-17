#pragma once

#include <list>
#include <algorithm>

template<class T>
class counter {
public:
	counter(std::list<T>& numbers) : numbers_(numbers) {}
	counter(const counter&) = default;
	counter& operator=(const counter&) = delete;
	void operator()()
	{
		std::for_each(numbers_.begin(), numbers_.end(), [this](const T& n) {
			if ((n % 3) == 0)
			{
				count++;
				sum += n;
			}
			});
	}
	T get_sum()
	{
		return sum;
	}
	T get_count()
	{
		return count;
	}
private:
	std::list<T> numbers_;
	int sum = 0;
	int count = 0;
};