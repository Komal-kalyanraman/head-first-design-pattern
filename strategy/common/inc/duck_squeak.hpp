
#ifndef _DUCK_SQUEAK_H_
#define _DUCK_SQUEAK_H_

#include "duck_quack_behaviour.hpp"

class Squeak: public QuackBehaviour{

    public:

    void quack() const;
};

#endif