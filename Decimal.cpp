#include "./Decimal.hpp"
#include <stdexcept>
#include <vector>
#include <cmath>
#include <string>
#include <iostream>

Decimal::Decimal() : digits(20), prec(20), val(digits + prec, '0') {}
Decimal::Decimal(const std::string& new_val, const int& new_digits, const int& new_prec) : digits(new_digits), prec(new_prec), val(new_prec, '0') {
    if (digits + prec != static_cast<int>(new_val.size())) {
        throw std::runtime_error("Error: The new string value's size exceeds precision.");
    }
    size_t i;
    for (i = 0; i < new_val.size(); ++i) {
        val[i] = new_val[i];
    }
}
Decimal std::max(const Decimal& a, const Decimal& b) { return (a.to_string-'0' > b.to_string()-'0') ? a : b; }
void Decimal::print() const {
    size_t count;
    for (count = 0; count < val.size(); ++count) {
        if (count == static_cast<size_t>(digits)) {
            std::cout << '.';
        } else {
            std::cout << val[count];
        }
    }
    std::cout << std::endl;
}
std::string Decimal::to_string() const {
    std::string s;
    size_t count;
    for (count = 0; count < val.size(); ++count) {
        if (count == static_cast<size_t>(digits)) {
            s += '.';
        } else {
            s += val[count];
        }
    }
    return s;
}
Decimal& Decimal::operator+=(const Decimal& other) {
	// Warning !!!
	return *this;
}
