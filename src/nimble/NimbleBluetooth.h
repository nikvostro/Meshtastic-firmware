#pragma once
#include "BluetoothCommon.h"

class NimbleBluetooth : BluetoothApi
{
  public:
    void setup();
    void shutdown();
    void deinit();
    void clearBonds();
    bool isActive();
    bool isConnected();
    int getRssi();

  private:
    void setupService();
    void startAdvertising();
};

void setBluetoothEnable(bool enable);
void clearNVS();