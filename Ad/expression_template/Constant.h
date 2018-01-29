#pragma once
namespace et {
    class one {
    public:
        one()
        {}
        static double eval()
        {
            return 1.0;
        }

        //one(const one& other);
        //one(one&& other);
        //one& operator =(const one& other);
        //one& operator =(one&& other);
    };
    class zero {
    public:
        zero()
        {}

        static double eval()
        {
            return 0.0;
        }
        //zero(const zero& other);
        //zero(zero&& other);
        //zero& operator =(const zero& other);
        //zero& operator =(zero&& other);
    };

}// namespace et