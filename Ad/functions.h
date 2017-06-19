#pragma once
#include <memory>

#include "Ad/ComputationalGraph.h"

namespace ad {
    void dfs(std::shared_ptr<ComputationalGraph> tree);
    void rdfs(std::shared_ptr<ComputationalGraph> tree);

}