#include "AadTest.h"


namespace adtest {
    TEST_F(AadTest, add_test) {
        ad::Aad x1(1.0);
        ad::Aad x2(2.0);

        auto y = x1 + x2;
        double expected_value = 3.0;
        
        EXPECT_DOUBLE_EQ(expected_value, y.value());


    }
    TEST_F(AadTest, sub_test) {

    }

    TEST_F(AadTest, mul_test) {

    }

    TEST_F(AadTest, div_test) {

    }

} // namespace adtest