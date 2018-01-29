#pragma once

namespace et {
    class Variable
    {
    public:
        // copy constructor
        //Variable(const Variable& other);
        //Variable(Variable&& other);

        // equal operators
        //Variable& operator =(const Variable& other);
        //Variable& operator =(Variable&& other);

        Variable(const double e)
        :_e(e)
        {}

        double get() const
        {
            return _e;
        }

    private:
        const double _e;
    };
}
