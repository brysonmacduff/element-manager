#include "element_manager.h"

using namespace ElementManagementSystem;

void ElementManager::ManageElements()
{
    const auto now = std::chrono::system_clock::now();
    const auto duration = now.time_since_epoch();
    const auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
    const std::string str_ms = std::to_string(milliseconds);
    spdlog::info("ElementManager::ManageElements() -> Heart Beat at Timestamp = {" + str_ms + " ms}");
}