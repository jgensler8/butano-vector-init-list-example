#include "bn_core.h"
#include "intermediate.h"

int main()
{
    bn::core::init();

    while(true)
    {
        intermediate::test();
        bn::core::update();
    }
}
