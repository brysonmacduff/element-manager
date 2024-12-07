#ifndef ELEMENT_MANAGER_H
#define ELEMENT_MANAGER_H

#include <chrono>
#include <spdlog/spdlog.h>

namespace ElementManagementSystem
{
class ElementManager
{
public:
    ElementManager() = default;
    void ManageElements();
};
}

#endif