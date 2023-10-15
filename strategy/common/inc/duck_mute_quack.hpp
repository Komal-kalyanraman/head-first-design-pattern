
#ifndef _DUCK_MUTE_QUACK_H_
#define _DUCK_MUTE_QUACK_H_

#include "duck_quack_behaviour.hpp"

class MuteQuack : public QuackBehaviour{
    
    public:
    void quack() const;
};

#endif