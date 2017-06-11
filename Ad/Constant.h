#pragma once
#include "INode.h"

namespace ad
{
    class Constant : public INode{
    public:
        Constant(const double value);

    };
} // namespace ad