#pragma once
#include "INode.h"

namespace ad {
    class Variable : public INode{
    public:
        Variable(double x)
        :_x(x)
        {

        }

    private:
        const double _x;
    };
}