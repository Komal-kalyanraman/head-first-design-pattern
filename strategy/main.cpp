
#include <memory>

#include "bl/inc/duck_mallard.hpp"
#include "bl/inc/duck_redhead.hpp"
#include "bl/inc/duck_rubber.hpp"
#include "bl/inc/duck_decoy.hpp"

int main(){

    std::unique_ptr<MallardDuck> mallardduck = std::make_unique<MallardDuck>();

    mallardduck->display();
    mallardduck->performFly();
    mallardduck->performQuack();
    mallardduck->swim();

    std::unique_ptr<RedHeadDuck> redheadduck = std::make_unique<RedHeadDuck>();

    redheadduck->display();
    redheadduck->performFly();
    redheadduck->performQuack();
    redheadduck->swim();

    std::unique_ptr<RubberDuck> rubberduck = std::make_unique<RubberDuck>();

    rubberduck->display();
    rubberduck->performFly();
    rubberduck->performQuack();
    rubberduck->swim();

    std::unique_ptr<DecoyDuck> decoyduck = std::make_unique<DecoyDuck>();

    decoyduck->display();
    decoyduck->performFly();
    decoyduck->performQuack();
    decoyduck->swim();

    return 0;
}