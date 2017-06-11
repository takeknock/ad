#pragma once

#include "Ad/ComputationalGraph.h"

#include <memory>

#include "fwd.h"



namespace ad
{
    class Aad {
    public:
        EXPORT_API Aad();
        EXPORT_API Aad(double x);

        EXPORT_API Aad(const Aad& other);
        EXPORT_API Aad(Aad&& other);

        const Aad& operator =(const Aad& other) const;
        const Aad& operator =(Aad&& other) const;

        EXPORT_API const Aad& operator +(const Aad& rhs) const;
        const Aad& operator -(const Aad& rhs) const;
        const Aad& operator *(const Aad& rhs) const;
        const Aad& operator /(const Aad& rhs) const;

        const Aad& operator+=(const Aad& rhs) const;
        const Aad& operator-=(const Aad& rhs) const;
        const Aad& operator*=(const Aad& rhs) const;
        const Aad& operator/=(const Aad& rhs) const;

        EXPORT_API const double value() const;
        EXPORT_API const double getDerivative(const Aad& from) const;

    private:
        double _value;
        double _derivative;
        std::shared_ptr<ComputationalGraph> _tree;
    };
}
