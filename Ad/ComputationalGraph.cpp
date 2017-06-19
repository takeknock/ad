#include "ComputationalGraph.h"

namespace ad {
    ComputationalGraph::ComputationalGraph() 
    :_value(0.0),
     _derivative(0.0),
     _right(std::shared_ptr<ComputationalGraph>()),
     _left(std::shared_ptr<ComputationalGraph>())
    {
    }

    const double ComputationalGraph::getDerivative(const Aad& from)
    {
        return 0.0;
    }
    //void ComputationalGraph::addRight(const std::shared_ptr<Aad> x)
    //{
    //    _right = x;
    //}
    //void ComputationalGraph::addLeft(const std::shared_ptr<Aad> x)
    //{
    //    _left = x;
    //}
    //void ComputationalGraph::addRight(const Aad& x)
    //{
    //}
    //void ComputationalGraph::addLeft(const Aad& x)
    //{
    //}

} // namespace ad 