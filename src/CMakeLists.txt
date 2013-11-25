# Copyright (C) 2013 Louis Hust. All Rights Reserved.

# add library
ADD_LIBRARY(test SHARED test.cxx)

# add the executable
ADD_EXECUTABLE(Tutorial Tutorial.cxx)
target_link_libraries(Tutorial test)

# add the install targets
install (TARGETS test DESTINATION lib)
install (TARGETS Tutorial DESTINATION bin)
