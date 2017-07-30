
add_library (HelloLib library.cpp)

target_include_directories (HelloLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
