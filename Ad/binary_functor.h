#pragma once
#include "Ad/Switch.h"
#include "Ad/IOperator.h"

namespace ad {
    class op_add : public IOperator {
    public:
        EXPORT_API double diff();
    };
    class op_sub : public IOperator {
    public:
        EXPORT_API double diff();
    };
    class op_mul : public IOperator {
    public:
        EXPORT_API double diff();
    };
    class op_div : public IOperator {
    public:
        EXPORT_API double diff();
    };

}


