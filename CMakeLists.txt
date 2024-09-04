# Set which version of cmake we need, will throw an error if this check fails.
cmake_minimum_required(VERSION 3.16...3.23)

# Set which version of C++ we want to use
set(CMAKE_CXX_STANDARD 23)

# Set the project name. This will affect our output program -> "name".exe
project ("LeetCodeProjects")

file (GLOB source_files CMAKE_CONFIGURE_DEPENDS
	*.h
	*.cpp
)

include_directories("./")

add_executable(${PROJECT_NAME} ${source_files})