set(CMAKE_POLICY_VERSION_MINIMUM 3.5 CACHE STRING "Forzar compatibilidad minima de CMake" FORCE)
cmake_minimum_required(VERSION 3.15...3.30)
project(SIRENE CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Configuración de FetchContent para obtener Raylib 5.0
include(FetchContent)
FetchContent_Declare(
    raylib
    URL https://github.com/raysan5/raylib/archive/refs/tags/6.0.tar.gz
)

# Desactivar la compilación de ejemplos y juegos de prueba de Raylib para agilizar el proceso
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(raylib)

# Declaración del ejecutable a partir de main.cpp
add_executable(SIRENE main.cpp)

# Enlace de la librería gráfica a tu proyecto
target_link_libraries(SIRENE PRIVATE raylib)