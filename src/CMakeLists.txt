# Copyright (C) 2013 Louis Hust. All Rights Reserved.

# add library
ADD_LIBRARY(louis SHARED test.cxx)

# add the executable
ADD_EXECUTABLE(Tutorial Tutorial.cxx)
target_link_libraries(Tutorial louis)

# add the install targets
install (TARGETS louis DESTINATION lib)
install (TARGETS Tutorial DESTINATION bin)
