module;

#include <cstdint>
#include <iostream>

export module logicpp.unit.num;

import logicpp.unit.eknow;

namespace logicpp {
    export class num {
        friend std::ostream &operator<<(std::ostream &os, num n);

    private:
        int64_t _value;
        int64_t _dot_pos;
        char _letter[8];
        eknow _know;

    public:
        explicit num(eknow know = eknow::KNOWN);

        num(int64_t value, int64_t dot_pos = 0, eknow know = eknow::KNOWN);

        explicit num(const char *letter, eknow know = eknow::UNKNOWN);

        num(int64_t value, int64_t dot_pos, const char *letter, eknow know = eknow::EXPRESSION);
    };

    std::ostream &operator<<(std::ostream &os, num n);
}