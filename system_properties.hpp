#ifndef TYPE_INFO_CPP
#define TYPE_INFO_CPP

#include <iostream>
#include <iomanip>
#include <type_traits>
#include "types.h"

template <typename T, short int byte = 8>
void convert_byte_to_bit() {
	std::cout << " | ";
	std::cout << byte * sizeof(T) << " bits" << std::endl;
}

template <typename T>
void _display_helper() {
	std::cout << std::left << std::setw(23) << TypeTraits<T>::name << " : "
			  << sizeof(T) << " bytes" << std::left;
	convert_byte_to_bit<T>();
}

template <typename T>
void display_sizes() {
	_display_helper<T>();
}

template <typename T, typename U, typename ... Args>
void display_sizes() {
	_display_helper<T>();
	display_sizes<U, Args...>();
}

//Check what type NULL macro is
template <bool T = std::is_integral<decltype(NULL)>::value,
	bool U = std::is_pointer<decltype(NULL)>::value,
	bool Y = std::is_scalar<decltype(NULL)>::value>
void null_check() {
	std::cout << "NULL macro is of ";
	if (T) {
		std::cout << "integral";
	}
	else if (U) {
		std::cout << "pointer";
	}
	else if (Y) {
		std::cout << "nulltpr_t";
	}
	else {
		std::cout << "neither pointer nor integral";
	}
	std::cout << " type." << std::endl;
}
#endif