# Copyright (C) 2013 Louis Hust. All Rights Reserved.
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT(Tutorial)

# Project version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

# Set configure file
configure_file (
  "include/TutorialConfig.h.in"
  "${PROJECT_BINARY_DIR}/include/TutorialConfig.h"
)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories(${PROJECT_BINARY_DIR}/include)
include_directories(include)

# add subdirectory
add_subdirectory(src)


