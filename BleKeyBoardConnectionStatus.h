#ifndef ESP32_BLE_KEYBOARD_CONNECTION_STATUS_H
#define ESP32_BLE_KEYBOARD_CONNECTION_STATUS_H
#include "sdkconfig.h"
#if defined(CONFIG_BT_ENABLED)

#include "nimconfig.h"
#if defined(CONFIG_BT_NIMBLE_ROLE_PERIPHERAL)

#include <NimBLEServer.h>
#include "NimBLECharacteristic.h"

class BleKeyBoardConnectionStatus : public NimBLEServerCallbacks
{
public:
  BleKeyBoardConnectionStatus(void);
  bool connected = false;
  void onConnect(NimBLEServer* pServer);
  void onDisconnect(NimBLEServer* pServer);
  NimBLECharacteristic* inputKeyboard;
  NimBLECharacteristic* outputKeyboard;
  NimBLECharacteristic* inputMediaKeys;
};

#endif // CONFIG_BT_NIMBLE_ROLE_PERIPHERAL
#endif // CONFIG_BT_ENABLED
#endif // ESP32_BLE_KEYBOARD_CONNECTION_STATUS_H
