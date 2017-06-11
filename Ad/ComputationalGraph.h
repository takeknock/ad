#pragma once
#include "fwd.h"

#include "INode.h"
#include "Node.h"

namespace ad
{
    class ComputationalGraph {
    public:
        EXPORT_API ComputationalGraph();
        EXPORT_API ComputationalGraph(const INode& top);
        
        void setup();
        const double getDerivative(const INode& x);
        void add(const INode& child);
    private:
        INode& _top();
    };
} // namespace ad
