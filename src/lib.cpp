#include "lib.h"

namespace lib {
    int vector_fn(std::vector<bn::string_view> string_views) {
        int sum = 0;
        for(auto sv : string_views) {
            for(auto c : sv) {
                sum += c;
            }
        }
        return sum;
    }
}