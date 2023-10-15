
#ifndef _DUCK_MALLARD_H_
#define _DUCK_MALLARD_H_

#include "inc/duck.hpp"
#include "inc/duck_fly_with_wings.hpp"
#include "inc/duck_quack.hpp"

class MallardDuck: public Duck{

    public:
    MallardDuck();

    void display() const override;
};

#endif