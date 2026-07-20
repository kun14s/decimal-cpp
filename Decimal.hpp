#ifndef DECIMAL_HPP
#define DECIMAL_HPP

#include <string>
#include <stdexcept>
#include <vector>
#include <iostream>

namespace std {
	Decimal max(const Decimal& a, const Decimal& b);
}

class Decimal {
    private:
    int digits;
    int prec;
    std::vector<char> val;
    public:
    Decimal();
    Decimal(const std::string& new_val, const int& new_digits, const int& new_prec);
    void print() const;
    std::string to_string() const;
    Decimal& operator+=(const Decimal& other);
};

#endif
