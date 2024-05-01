module;

#include <cstdint>
#include <cmath>
#include <cstring>
#include <iostream>

module logicpp.unit.num;
namespace logicpp {
    num::num(int64_t value, int64_t dot_pos, eknow know) : _value(value), _dot_pos(dot_pos), _letter(""),
                                                           _know(know) {}

    num::num(int64_t value, int64_t dot_pos, const char *letter, eknow know) : _value(value), _dot_pos(dot_pos),
                                                                               _know(know) {
        strcpy(this->_letter, letter);
    }

    num::num(const char *letter, eknow know) : _value(0), _dot_pos(0), _know(know) {
        strcpy(this->_letter, letter);
    }


    std::ostream &operator<<(std::ostream &os, num n) {
        if (n._know == eknow::EXPRESSION || n._know == eknow::UNKNOWN) {
            os << n._letter;
        } else {
            os << n._value * pow(10, n._dot_pos);
        }
        return os;
    }
}