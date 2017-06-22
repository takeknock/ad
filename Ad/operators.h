#pragma once
#include "Ad/ComputationalGraph.h"
#include "Ad/Aad.h"
#include "Ad/IOperator.h"
#include "Ad/binary_functor.h"

namespace ad {

    // non member functions
    inline Aad operator +(const Aad& lhs, const Aad& rhs)
    {
        std::shared_ptr<ComputationalGraph> ret(
            new ComputationalGraph(op_add(), lhs.value() + rhs.value(), lhs.tree(), rhs.tree()));

        return Aad(ret);
    }

    inline Aad operator -(const Aad& lhs, const Aad& rhs)
    {
        std::shared_ptr<ComputationalGraph> ret(
            new ComputationalGraph(op_sub(), lhs.value() - rhs.value(), lhs.tree(), rhs.tree()));

        return Aad(ret);
    }

    inline Aad operator *(const Aad& lhs, const Aad& rhs)
    {
        std::shared_ptr<ComputationalGraph> ret(
            new ComputationalGraph(op_mul(), lhs.value() * rhs.value(), lhs.tree(), rhs.tree()));

        return Aad(ret);
    }

    inline Aad operator /(const Aad& lhs, const Aad& rhs)
    {
        std::shared_ptr<ComputationalGraph> ret(
            new ComputationalGraph(op_div(), lhs.value() / rhs.value(), lhs.tree(), rhs.tree()));

        return Aad(ret);
    }

    inline Aad operator +(const Aad& lhs, double x)
    {
        std::shared_ptr<ComputationalGraph> ret(
            new ComputationalGraph(op_add(), lhs.value() + x, lhs.tree(), nullptr));

        return Aad(ret);
    }

    inline Aad operator -(const Aad& lhs, double x)
    {
        std::shared_ptr<ComputationalGraph> ret(
            new ComputationalGraph(op_sub(), lhs.value() - x, lhs.tree(), nullptr));

        return Aad(ret);
    }

    inline Aad operator *(const Aad& lhs, double x)
    {
        std::shared_ptr<ComputationalGraph> ret(
            new ComputationalGraph(op_mul(), lhs.value() * x, lhs.tree(), nullptr));

        return Aad(ret);
    }

    inline Aad operator /(const Aad& lhs, double x)
    {
        std::shared_ptr<ComputationalGraph> ret(
            new ComputationalGraph(op_div(), lhs.value() / x, lhs.tree(), nullptr));

        return Aad(ret);
    }

    inline Aad& operator+=(Aad& lhs, const Aad& rhs)
    {
        return lhs;
    }

    inline Aad& operator-=(Aad& lhs, const Aad& rhs)
    {
        return lhs;
    }

    inline Aad& operator*=(Aad& lhs, const Aad& rhs)
    {
        return lhs;
    }

    inline Aad& operator/=(Aad& lhs, const Aad& rhs)
    {
        return lhs;
    }



} // namespace ad