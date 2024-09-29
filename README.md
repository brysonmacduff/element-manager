* Author: Bryson MacDuff
* Edit Date: 2024-09-29
* Description: This is a simple project to experiment with background processes.
* Build Instructions:
    * cd build
    * cmake ..
    * make
* Run Instructions:
    * cd build
    * ./src/element_manager
* Testing Instructions:
    * cd build
    * make test
* Dependecies:
    * GoogleTest (GTest)
        * libgtest-dev
        * libgmock-dev
    * Speed Log
        * libspdlog-dev
* Build Debian Package:
    * cp build/src/element_manager deb/element-manager/usr/local/bin
    * cd deb
    * dpkg-deb --build element-manager
    * apt install -y ./element-manager.deb