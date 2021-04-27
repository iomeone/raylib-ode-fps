# Raylib + ODE = FPS [![CI](https://github.com/nopsteam/c-cmake-raylib-boilerplate/actions/workflows/main.yml/badge.svg)](https://github.com/nopsteam/c-cmake-raylib-boilerplate/actions/workflows/main.yml)

An physics based FPS made with [Raylib](https://github.com/raysan5/raylib) and [ODE](https://bitbucket.org/odedevs/ode/src/master)
![Example](./raylib-ode-fps.gif)

## Compiling / Building

### Installing Dependencies

#### Arch Linux
```bash
yay -Sy clang cmake lcov glfw libx11 libxcursor libxinerama libxrandr vulkan-headers xorg-server-devel xorg-xinput
```

#### Ubuntu
```bash
sudo apt-get install clang cmake lcov libasound2-dev mesa-common-dev libx11-dev libxrandr-dev libxi-dev xorg-dev libgl1-mesa-dev libglu1-mesa-dev
```

## Usage

### Setup
This will build cmake files and download dependencies
```bash
make setup
```

### Build
```bash
# Debug build
make debug
# Release build
make release
```

### Run Tests
This will build and run unity tests
```bash
make test
```

### Clean
This will delete generated files for debug and release
```bash
make clean
```

### Run Binary
This will open an Raylib white window with the unlicense logo on it.
```bash
# Debug bin
make run
# Release bin
make runrel
```

## License
This is free and unencumbered software released into the public domain.  
For more information, please refer to <http://unlicense.org/>
