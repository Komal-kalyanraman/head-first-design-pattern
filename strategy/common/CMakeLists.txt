set(APP_NAME duck_common)

add_library(${APP_NAME} STATIC
    src/duck.cpp
	src/duck_fly_behaviour.cpp
    src/duck_quack_behaviour.cpp
    src/duck_fly_with_wings.cpp
    src/duck_fly_no_way.cpp
    src/duck_squeak.cpp
    src/duck_quack.cpp
)