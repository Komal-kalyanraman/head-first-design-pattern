
#ifndef _DUCK_RUBBER_H_
#define _DUCK_RUBBER_H_

#include "inc/duck.hpp"
#include "inc/duck_fly_no_way.hpp"
#include "inc/duck_squeak.hpp"

class RubberDuck: public Duck{

    public:
    RubberDuck();

    void display() const override;
};

#endif