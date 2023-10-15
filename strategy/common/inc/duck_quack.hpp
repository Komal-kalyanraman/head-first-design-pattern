
#ifndef _DUCK_QUACK_H_
#define _DUCK_QUACK_H_

#include "duck_quack_behaviour.hpp"

class Quack : public QuackBehaviour{
    public:
    void quack() const override;
};

#endif