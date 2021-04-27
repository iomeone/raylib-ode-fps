add_library(
  rlights STATIC
  rlights.c
)

target_link_libraries(
  rlights
  raylib
)

###################################################################

# COVERAGE
if (${CMAKE_BUILD_TYPE} MATCHES "Coverage")
  if ("${CMAKE_C_COMPILER_ID}" STREQUAL "GNU")
    file(GLOB ALL_SRC_C_FILES "*.c")

    foreach(src ${ALL_SRC_C_FILES}) 
      get_filename_component(name ${src} NAME_WLE)
      message(STATUS "Coverage build for: ${name}")
      target_compile_options(${name} PRIVATE --coverage)
      target_link_libraries(${name} gcov)
    endforeach(src)

  else ()
    message(FATAL_ERROR "Only GCC is supported for coverage")
  endif ()
endif ()
