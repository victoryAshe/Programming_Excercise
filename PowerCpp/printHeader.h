#pragma once
#ifndef PRINTHEADER_H
#define PRINTHEADER_H

template<typename T>
void print(const T& v, const char* message = "")
{
	typename T::const_iterator it;
	std::cout << message << "( ";

	for (it = v.begin(); it != v.end(); ++it)
	{
		std::cout << *it << ' ';
	}
	std::cout << ")" << std::endl;
}

#endif