
#include <iostream>
#include "inc/duck_decoy.hpp"

DecoyDuck::DecoyDuck() :
    Duck(std::make_unique<FlyNoWay>(), std::make_unique<MuteQuack>()){
};

void DecoyDuck::display() const{
    std::cout<<"I am Decoy Duck!!"<<std::endl;
}