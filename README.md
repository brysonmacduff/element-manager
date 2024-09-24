* Author: Bryson MacDuff
* Edit Date: 2024-09-23
* Description: This is a c++ template project
* Build Instructions:
    * cd build
    * cmake ..
    * make
* Run Instructions:
    * cd build
    * make ./src/cpp_template
* Testing Instructions:
    * cd build
    * make test
* Testing Dependecies:
    * GoogleTest (GTest)
        * libgtest-dev
        * libgmock-dev
* Build Debian Package:
    * cp build/src/cpp-template deb/cpp-template/usr/local/bin
    * cd deb
    * dpkg-deb --build cpp-template
    * dpkg -i cpp-template.deb
