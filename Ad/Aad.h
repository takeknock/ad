#pragma once

// std include
#include <memory>

// own include
#include "Ad/fwd.h"
#include "Ad/ComputationalGraph.h"

namespace ad {
    class Aad {
    public:
        // constructors
        EXPORT_API Aad();
        EXPORT_API Aad(double x);
        EXPORT_API Aad(const Aad& other);
        EXPORT_API Aad(Aad&& other);

        // operator equals
        EXPORT_API const Aad& operator =(const Aad& other);
        EXPORT_API const Aad& operator =(Aad&& other);

        // unary operators
        const Aad& operator+=(const Aad& rhs);
        const Aad& operator-=(const Aad& rhs);
        const Aad& operator*=(const Aad& rhs);
        const Aad& operator/=(const Aad& rhs);

        EXPORT_API const Aad operator +(const Aad& rhs);
        EXPORT_API const Aad operator -(const Aad& rhs);
        EXPORT_API const Aad operator *(const Aad& rhs);
        EXPORT_API const Aad operator /(const Aad& rhs);

        // methods
        EXPORT_API const double value() const;
        EXPORT_API const double getDerivative(const Aad& from) const;

    private:
        double _value;
        double _derivative;
        std::shared_ptr<ComputationalGraph> _tree;
    };
} // namespace ad
