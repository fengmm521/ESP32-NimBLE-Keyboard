#include "BleKeyBoardConnectionStatus.h"

BleKeyBoardConnectionStatus::BleKeyBoardConnectionStatus(void) {
}

void BleKeyBoardConnectionStatus::onConnect(NimBLEServer* pServer)
{
  this->connected = true;
}

void BleKeyBoardConnectionStatus::onDisconnect(NimBLEServer* pServer)
{
  this->connected = false;
}
