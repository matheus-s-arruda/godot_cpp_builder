cmake_minimum_required(VERSION 3.0.0)
project(purgatorium VERSION 0.1.0 LANGUAGES CXX)

set(LIBGODOT "/home/matheus/Documentos/godot/godot_cpp_builder/godot-cpp/bin/libgodot-cpp.linux.template_debug.x86_64.a")
set(GODOT_CPP "/home/matheus/Documentos/godot/godot_cpp_builder/godot-cpp")
SET(BUILD_SHARED_LIBS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(GODOT_LINKER_FLAGS "-static-libgcc -static-libstdc++ -Wl,-R,'$$ORIGIN'")
set(GODOT_COMPILE_FLAGS "-fPIC")

include(CTest)
enable_testing()

add_executable(purgatorium purgatorium.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

include_directories("${GODOT_CPP}/godot-headers")
include_directories("${GODOT_CPP}/include")
include_directories("${GODOT_CPP}/gen/include")
include_directories("${GODOT_CPP}/src")
include_directories("${GODOT_CPP}/src/core")
include_directories("${GODOT_CPP}/src/variant")

target_link_libraries(purgatorium "${LIBGODOT}")

target_include_directories(purgatorium PUBLIC
    "${GODOT_CPP}/godot-headers"
	"${GODOT_CPP}/include"
	"${GODOT_CPP}/src/core"
	"${GODOT_CPP}/gen"
)