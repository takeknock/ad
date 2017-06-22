#include "operators.h"

#include "Ad/ComputationalGraph.h"

namespace ad {

    double op_add::diff() 
    {
        return 0.0;
    }

    double op_sub::diff()
    {
        return 0.0;
    }

    double op_mul::diff()
    {
        return 0.0;
    }

    double op_div::diff()
    {
        return 0.0;
    }


}
