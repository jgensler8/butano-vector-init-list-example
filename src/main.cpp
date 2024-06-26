#include "bn_core.h"
#include <vector>

int vector_fn(std::vector<bn::string_view> string_views) {
    int sum = 0;
    for(auto sv : string_views) {
        for(auto c : sv) {
            sum += c;
        }
    }
    return sum;
}

    void test() {
        int s = 0;
        s += vector_fn({"test1"});
        s += vector_fn({"test2"});
        s += vector_fn({"test3"});
        s += vector_fn({"test4"});
        s += vector_fn({"test5"});
        s += vector_fn({"test6"});
        s += vector_fn({"test7"});
        s += vector_fn({"test8"});
        s += vector_fn({"test9"});
        s += vector_fn({"test10"});
        s += vector_fn({"test11"});
        s += vector_fn({"test12"});
        s += vector_fn({"test13"});
        s += vector_fn({"test14"});
        s += vector_fn({"test15"});
        s += vector_fn({"test16"});
        s += vector_fn({"test17"});
        s += vector_fn({"test18"});
        s += vector_fn({"test19"});
        s += vector_fn({"test20"});
        s += vector_fn({"test21"});
        s += vector_fn({"test22"});
        s += vector_fn({"test23"});
        s += vector_fn({"test24"});
        s += vector_fn({"test25"});
        s += vector_fn({"test26"});
        s += vector_fn({"test27"});
        s += vector_fn({"test28"});
        s += vector_fn({"test29"});
        s += vector_fn({"test30"});
        s += vector_fn({"test31"});
        s += vector_fn({"test32"});
        s += vector_fn({"test33"});
        s += vector_fn({"test34"});
        s += vector_fn({"test35"});
        s += vector_fn({"test36"});
        s += vector_fn({"test37"});
        s += vector_fn({"test38"});
        s += vector_fn({"test39"});
        s += vector_fn({"test40"});
        s += vector_fn({"test41"});
        s += vector_fn({"test42"});
        s += vector_fn({"test43"});
        s += vector_fn({"test44"});
        s += vector_fn({"test45"});
        s += vector_fn({"test46"});
        s += vector_fn({"test47"});
        s += vector_fn({"test48"});
        s += vector_fn({"test49"});
        s += vector_fn({"test50"});
        s += vector_fn({"test51"});
        s += vector_fn({"test52"});
        s += vector_fn({"test53"});
        s += vector_fn({"test54"});
        s += vector_fn({"test55"});
        s += vector_fn({"test56"});
        s += vector_fn({"test57"});
        s += vector_fn({"test58"});
        s += vector_fn({"test59"});
        s += vector_fn({"test60"});
        s += vector_fn({"test61"});
        s += vector_fn({"test62"});
        s += vector_fn({"test63"});
        s += vector_fn({"test64"});
        s += vector_fn({"test65"});
        s += vector_fn({"test66"});
        s += vector_fn({"test67"});
        s += vector_fn({"test68"});
        s += vector_fn({"test69"});
        s += vector_fn({"test70"});
        s += vector_fn({"test71"});
        s += vector_fn({"test72"});
        s += vector_fn({"test73"});
        s += vector_fn({"test74"});
        s += vector_fn({"test75"});
        s += vector_fn({"test76"});
        s += vector_fn({"test77"});
        s += vector_fn({"test78"});
        s += vector_fn({"test79"});
        s += vector_fn({"test80"});
        s += vector_fn({"test81"});
        s += vector_fn({"test82"});
        s += vector_fn({"test83"});
        s += vector_fn({"test84"});
        s += vector_fn({"test85"});
        s += vector_fn({"test86"});
        s += vector_fn({"test87"});
        s += vector_fn({"test88"});
        s += vector_fn({"test89"});
        s += vector_fn({"test90"});
        s += vector_fn({"test91"});
        s += vector_fn({"test92"});
        s += vector_fn({"test93"});
        s += vector_fn({"test94"});
        s += vector_fn({"test95"});
        // s += vector_fn({"test96"});
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update();
        bn::core::update(); // other good / bad line
        // bn::core::update();
}

void test2() {
    int s = 0;
        s += vector_fn({"test96"});
}

int main()
{
    bn::core::init();

    while(true)
    {
        test();
        test2();
        bn::core::update();
    }
}
