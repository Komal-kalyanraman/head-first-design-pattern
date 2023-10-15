#ifndef _DUCK_H_
#define _DUCK_H_

#include <memory>
#include <iostream>

#include "duck_fly_behaviour.hpp"
#include "duck_quack_behaviour.hpp"

class Duck{

    protected:
    std::unique_ptr<FlyBehaviour> flyBehaviour;
    std::unique_ptr<QuackBehaviour> quackBehaviour; 

    public:
    
    Duck(std::unique_ptr<FlyBehaviour> flyBehavior, std::unique_ptr<QuackBehaviour> quackBehavior);
    
    void swim() const;
    virtual void display();
    void performQuack() const;
    void performFly() const;

};

#endif // End of _DUCK_H_