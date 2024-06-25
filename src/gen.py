with open("intermediate.cpp", "w") as f:
    f.write("""
#include "intermediate.h"

namespace intermediate {
    void test() {
        int s = 0;
""")
    for i in range(1, 500):
        f.write(f"s += lib::vector_fn({{\"test{i}\"}});\n")
    f.write("""
        }
}                 
""")