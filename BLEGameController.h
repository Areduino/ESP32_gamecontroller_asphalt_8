#ifndef BLE_GAME_CONTROLLER_H
#define BLE_GAME_CONTROLLER_H

#include <BLEDevice.h>
#include <BLEHIDDevice.h>
#include <HIDTypes.h>
#include <BLEUtils.h>

class BLEGameController {
public:
    BLEGameController(const char* deviceName);
    void begin();
    void sendInput(int x, int y, bool buttonPressed);
    
private:
    BLEHIDDevice* hid;
    BLEServer* pServer;
};

#endif
