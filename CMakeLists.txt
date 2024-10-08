cmake_minimum_required(VERSION 3.25)
project(o_xlsx_pg VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

# Fetch the repository without automatically adding it
FetchContent_Declare(
  OpenXLSX
  GIT_REPOSITORY https://github.com/Endre-Sinka/OpenXLSX.git
  GIT_TAG        openxlsx_lib  
)

FetchContent_MakeAvailable(OpenXLSX)

add_executable(o_xlsx_pg main.cpp)
target_link_libraries(o_xlsx_pg PRIVATE OpenXLSX)
target_include_directories(o_xlsx_pg PRIVATE ${OpenXLSX_SOURCE_DIR})

include(CTest)
enable_testing()

