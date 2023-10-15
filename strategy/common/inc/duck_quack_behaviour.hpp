
#ifndef _QUACK_BEHAVIOUR_H_
#define _QUACK_BEHAVIOUR_H_

class QuackBehaviour{
    public:
        virtual void quack() const = 0;
        
        // IN C++: a base class with virtual functions must also have a virtual destructor.
        virtual ~QuackBehaviour() = default;
};

#endif