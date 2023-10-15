
#ifndef _FLY_WITH_WINGS_H_
#define _FLY_WITH_WINGS_H_

#include "duck_fly_behaviour.hpp"

class FlyWithWings : public FlyBehaviour {
    public:
    void fly() const override;
};

#endif