#include "ComputationalGraph.h"

namespace ad {
    ComputationalGraph::ComputationalGraph() 
    {
    }
    const double ComputationalGraph::getDerivative(const Aad& from)
    {
        return 0.0;
    }
    void ComputationalGraph::addRight(const std::shared_ptr<Aad> x)
    {
        _right = x;
    }
    void ComputationalGraph::addLeft(const std::shared_ptr<Aad> x)
    {
        
        _left = x;

    }

} // namespace ad 