#include "Ad/CalculationTree.h"
#include "Ad/Node.h"

int main() {
    ad::CalculationTree tree = ad::CalculationTree();
    
    // x^2 + l*x - m*n(m*n + 1)
    // v_1 = x*x
    // v_2 = l*x
    // v_3 = m * n
    // v_4 = m * n + 1
    // v_5 = v_3 * v_4
    // v_6 = v_1 + v_2
    // v_7 = v_6 - v_5


    return 0;
}