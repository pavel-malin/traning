#define CATCH_CONFIG_MAIN
#include "/home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp"
#include <boost/smart_ptr/scoped_ptr.hpp>


struct DeadMenOfDunharrow {
    DeadMenOfDunharrow(const char* m="") 
                : message{ m } {
                    oaths_to_fulfill++;
                }
    ~DeadMenOfDunharrow() {
        oaths_to_fulfill++;
    }
    const char* message;
    static int oaths_to_fulfill;
};

int DeadMenOfDunharrow::oaths_to_fulfill{};
using ScopedOathbreakers = boost::scoped_ptr<DeadMenOfDunharrow>;