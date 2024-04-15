#include "DisplayDriver.h"
#include "ILog.h"

DisplayDriver::DisplayDriver(uint16_t width, uint16_t height) : lvgl(width, height), screenWidth(width), screenHeight(height) {}

void DisplayDriver::init(DeviceGUI *gui)
{
    ILOG_DEBUG("DisplayDriver init...\n");
    view = gui;
    lvgl.init();
}
