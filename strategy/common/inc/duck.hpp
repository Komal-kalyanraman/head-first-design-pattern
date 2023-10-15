#ifndef _DUCK_H_
#define _DUCK_H_

#include <memory>
#include <iostream>

#include "duck_fly_behaviour.hpp"
#include "duck_quack_behaviour.hpp"

class Duck{

    public:
    // std::unique_ptr<FlyBehavior> flyBehavior;
    // std::unique_ptr<QuackBehavior> quackBehavior; 

    public:
    
    void swim();
    virtual void display();
    void performQuack();
    void performFly();

};

#endif // End of _DUCK_H_