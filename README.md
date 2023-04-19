# apply_tint_for_an_image
A function which take a Photo (Matrix of pixel) and apply it a color tinit using OpenCV

Indeed, the goal of this project is simply to propose an piece of code which permit
to apply a tint to an image using OpenCV

All source files are in [**src**](./src/) folder

## How to build the project ?

### Requirements

* OpenCV on [Linux](https://www.geeksforgeeks.org/how-to-install-opencv-in-c-on-linux/) or [Windows](https://www.tutorialspoint.com/how-to-install-opencv-for-cplusplus-in-windows) (the c++ library)
* g++
* [Cmake](https://cmake.org/install/)

### Build it on linux

You can just exec the
    [build.sh](./build.sh) file

The binary **tint** will be on the build folder

## How to run the project

    ./build/tint path_to_image [blue_color green_color red_color]

You **must** include a first argument which is the path to the image

You can add 3 others parameters that are **blue green and red** color following the **rgb (here bgr) convention**, **colors** of the tint.
This is **optionally**. If you do not precise it, the color of the tint will be set to **green**
