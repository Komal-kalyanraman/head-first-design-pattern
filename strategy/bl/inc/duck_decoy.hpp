
#ifndef _DUCK_DECOY_H_
#define _DUCK_DECOY_H_

#include "inc/duck.hpp"
#include "inc/duck_fly_no_way.hpp"
#include "inc/duck_mute.hpp"

class DecoyDuck: public Duck{

    public:
    DecoyDuck();

    void display() const override;
};

#endif