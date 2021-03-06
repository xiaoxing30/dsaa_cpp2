#pragma once
#include "ex9_18.h"

void testEx9_18()
{
	// input: 1 2 3 4 ... 23 24 25
	circularDeque<int> q;
	std::cin >> q;
	std::cout << " q: " << q << std::endl;
	circularDeque<int> q1 = q;
	std::cout << "q1: " << q1 << std::endl;
	auto size = q1.size();
	for (int i = 1; i < size; ++i)
		q1.pop_back();
	std::cout << "q1: " << q1 << std::endl;
	for (int i = 1; i < 26; ++i)
		q1.push_front(i);
	std::cout << "q1: " << q1 << std::endl;
	for (int i = 1; i < 26; ++i)
		q1.push_back(i);
	std::cout << "q1: " << q1 << std::endl;
	for (int i = 1; i < 26; ++i)
		q1.pop_front();
	std::cout << "q1: " << q1 << std::endl;
	for (int i = 1; i < 26; ++i)
		q1.pop_back();
	std::cout << "q1: " << q1 << std::endl;
}