cmake_minimum_required(VERSION 3.12)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

# Ajoutez ici les fichiers sources de votre projet
set(SOURCES
        src/init.cpp
        main.cpp
        src/commands.cpp
        src/cmd.cpp
)

# Créez l'exécutable en liant les fichiers sources
add_executable(MyProject ${SOURCES})

# Incluez les répertoires contenant les fichiers d'en-tête
target_include_directories(MyProject PRIVATE include)

# Ajoutez ici d'autres dépendances si nécessaire
# target_link_libraries(MyProject other_library)