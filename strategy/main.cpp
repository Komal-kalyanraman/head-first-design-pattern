
#include <memory>

#include "bl/inc/duck_MallardDuck.hpp"

int main(){

    std::unique_ptr<MallardDuck> mallardduck = std::make_unique<MallardDuck>();

    mallardduck->display();
    mallardduck->performFly();
    mallardduck->performQuack();
    mallardduck->swim();

    return 0;
}