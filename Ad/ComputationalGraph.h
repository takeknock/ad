#pragma once
#include "INode.h"
#include "Node.h"

namespace ad
{
    class ComputationalGraph {
    public:
        ComputationalGraph();
        ComputationalGraph(const INode& top);
        
        void setup();
        const double getDerivative(const INode& x);
        void add(const INode& child);
    private:
        const INode& _top;
    };
}
