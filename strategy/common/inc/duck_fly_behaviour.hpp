
#ifndef _FLY_BEHAVIOUR_H_
#define _FLY_BEHAVIOUR_H_

/// FlyBehavior is an interface that all flying classes implement. All new flying classes just need to implement the fly() method.
class FlyBehaviour {
    public:
        virtual void fly() const = 0;
        
        // IN C++: a base class with virtual functions must also have a virtual destructor.
        virtual ~FlyBehaviour() = default;
};

#endif