module;
#include <cstdint>
export module logicpp.unit.eknow;

namespace logicpp {
    export enum class eknow : int64_t {
        UNKNOWN,
        EXPRESSION,
        KNOWN,
        PART_KNOWN,
    };
}