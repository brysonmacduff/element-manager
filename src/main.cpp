#include "element_manager.h"
#include <iostream>
#include <spdlog/spdlog.h>
#include <unistd.h>
#include <string>

using namespace ElementManagementSystem;

void CycleElementManager(ElementManager& elem_mngr, int sleep_ms)
{
    while(true)
    {
        usleep(sleep_ms);
        elem_mngr.ManageElements();
    }
}

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        spdlog::error("main() -> Expecting 1 argument: <(int) millisecond interval>");
        return 1;
    }

    ElementManager elem_mngr;
    int interval_ms = std::stoi(argv[1]);

    CycleElementManager(elem_mngr, interval_ms);

    return 0;
}