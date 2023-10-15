
#ifndef _DUCK_REDHEAD_H_
#define _DUCK_REDHEAD_H_

#include "inc/duck.hpp"
#include "inc/duck_fly_with_wings.hpp"
#include "inc/duck_quack.hpp"

class RedHeadDuck: public Duck{

    public:
    RedHeadDuck();

    void display() const override;
};

#endif