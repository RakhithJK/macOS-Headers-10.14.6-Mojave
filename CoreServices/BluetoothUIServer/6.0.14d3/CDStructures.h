//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Named Structures

struct BluetoothDeviceAddress {
    unsigned char data[6];
};

struct BluetoothHCIRequestCallbackInfo {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct BluetoothHCIUserClientNotificationDataInfo {
    unsigned long long _field1;
    unsigned long long _field2;
    struct BluetoothHCIRequestCallbackInfo _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned short _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
};

struct IOBluetoothHCIEventNotificationMessage {
    struct BluetoothHCIUserClientNotificationDataInfo _field1;
    void *_field2;
};
