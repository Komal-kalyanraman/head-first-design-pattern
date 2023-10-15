
#include <iostream>
#include "inc/duck_rubber.hpp"

RubberDuck::RubberDuck() :
    Duck(std::make_unique<FlyNoWay>(), std::make_unique<Squeak>()){
};

void RubberDuck::display() const{
    std::cout<<"I am Rubber Duck!!"<<std::endl;
}