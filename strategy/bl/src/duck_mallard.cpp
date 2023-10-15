
#include "inc/duck_mallard.hpp"
#include <iostream>

MallardDuck::MallardDuck() :
    Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()){
};

void MallardDuck::display() const{
    std::cout<<"I am Mallard Duck!!"<<std::endl;
}