cmake_minimum_required(VERSION 3.5)

project(Database_files)

add_library(Database_files SHARED AssetManagerDBServiceInterface.h AssetManagerDBService.cpp AssetManagerDBService.h )

find_package(Qt5 REQUIRED COMPONENTS Core Quick Sql)
target_link_libraries(Database_files PRIVATE Qt5::Sql)
