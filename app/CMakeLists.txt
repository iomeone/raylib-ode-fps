add_executable(
  example_app
  example_app.c
)

target_link_libraries(
  example_app
  raylib
  rlights
  ODE
)

add_dependencies(
  example_app
  resources
)
