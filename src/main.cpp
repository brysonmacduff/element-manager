#include "element_manager.h"

#include <spdlog/spdlog.h>
#include <unistd.h>
#include <cstdlib>

using namespace ElementManagementSystem;

int main(int argc, char* argv[])
{
    if(argc <= 1)
    {
        spdlog::error("main() -> EMS failed to start. Expecting 1 argument: <int> {microsecond_interval}");
        return 1;
    }

    int interval = std::atoi(argv[1]);

    ElementManager manager;
    while(true)
    {
        manager.ManageElements();
        usleep(interval);
    }

    return 0;
}