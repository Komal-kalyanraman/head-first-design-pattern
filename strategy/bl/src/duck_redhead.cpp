

#include <iostream>
#include "inc/duck_redhead.hpp"

RedHeadDuck::RedHeadDuck() :
    Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()){
};

void RedHeadDuck::display() const{
    std::cout<<"I am RedHead Duck!!"<<std::endl;
}