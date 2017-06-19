#include "ComputationalGraph.h"

namespace ad {
    ComputationalGraph::ComputationalGraph() 
    :_value(0.0),
     _derivative(0.0),
     _right(std::shared_ptr<ComputationalGraph>()),
     _left(std::shared_ptr<ComputationalGraph>())
    {
    }

    ComputationalGraph::ComputationalGraph(
        double value,
        double derivative,
        std::shared_ptr<ComputationalGraph> left,
        std::shared_ptr<ComputationalGraph> right)
    :_value(value),
     _derivative(derivative),
     _left(left),
     _right(right)
    {   
    }

    const double ComputationalGraph::getDerivative(const Aad& from)
    {
        return 0.0;
    }

    void ComputationalGraph::setDerivative(double derivative)
    {
        _derivative = derivative;
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