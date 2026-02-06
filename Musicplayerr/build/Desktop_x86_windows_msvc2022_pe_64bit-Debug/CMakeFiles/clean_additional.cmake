# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Musicplayerr_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Musicplayerr_autogen.dir\\ParseCache.txt"
  "Musicplayerr_autogen"
  )
endif()
