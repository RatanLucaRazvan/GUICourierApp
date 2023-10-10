# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Practical_exam_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Practical_exam_autogen.dir\\ParseCache.txt"
  "Practical_exam_autogen"
  )
endif()
