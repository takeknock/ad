#include "ComputationalGraph.h"

namespace ad {
    ComputationalGraph::ComputationalGraph() 
    :_right(std::shared_ptr<Aad>()), _left(std::shared_ptr<Aad>())
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
    //void ComputationalGraph::addRight(const Aad& x)
    //{
    //}
    //void ComputationalGraph::addLeft(const Aad& x)
    //{
    //}

} // namespace ad 