
#include "inc/duck.hpp"

Duck::Duck(std::unique_ptr<FlyBehaviour> flyBehaviour, std::unique_ptr<QuackBehaviour> quackBehaviour) : 
    flyBehaviour(std::move(flyBehaviour)),
    quackBehaviour(std::move(quackBehaviour)) {
}

void Duck::performQuack() const {
    // Delegate to the behaviour class.
    quackBehaviour->quack();
}

void Duck::performFly() const {
    // Delegate to the behavior class.
    flyBehaviour->fly();
}

void Duck::swim() const {
    std::cout << "All ducks float, even decoys!" << std::endl<<std::endl;
}