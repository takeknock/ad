#pragma once
#include "fwd.h"
#include "Ad/ComputationalGraph.h"

namespace ad
{
    class Aad {
    public:
        EXPORT_API Aad();
        EXPORT_API Aad(double x);

        EXPORT_API Aad(Aad& rhs);
        EXPORT_API Aad(Aad&& rhs);

        const Aad& operator =(const Aad& rhs) const;
        const Aad& operator +(const Aad& rhs) const;
        const Aad& operator -(const Aad& rhs) const;
        const Aad& operator *(const Aad& rhs) const;
        const Aad& operator /(const Aad& rhs) const;

        const Aad& operator+=(const Aad& rhs) const;
        const Aad& operator-=(const Aad& rhs) const;
        const Aad& operator*=(const Aad& rhs) const;
        const Aad& operator/=(const Aad& rhs) const;

    private:
        double _value;
        double _div;
        ComputationalGraph _tree;
    };
}
