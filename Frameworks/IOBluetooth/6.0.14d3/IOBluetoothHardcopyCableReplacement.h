//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IOBluetooth/HardcopyCableReplacement.h>

@class IOBluetoothDevice, IOBluetoothL2CAPChannel, NSString;

@interface IOBluetoothHardcopyCableReplacement : HardcopyCableReplacement
{
    IOBluetoothDevice *printer;
    IOBluetoothL2CAPChannel *command;
    IOBluetoothL2CAPChannel *data;
    unsigned short commandChannel;
    unsigned short dataChannel;
    BOOL dataChannelIsOpen;
    BOOL commandChannelIsOpen;
    char *mBufferForOutgoingData;
    unsigned int mReadPointerInBuffer;
    unsigned int mWritePointerInBuffer;
    NSString *stringFor1284ID;
}

+ (id)getPrinter1284ID:(id)arg1;
+ (id)getRawPrinter1284ID:(id)arg1;
+ (int)getDataChannelL2CAPPSM:(unsigned short *)arg1 from:(id)arg2;
+ (int)getControlChannelL2CAPPSM:(unsigned short *)arg1 from:(id)arg2;
+ (id)deviceHCRPServiceRecord:(id)arg1;
@property(copy) NSString *printer1284ID; // @synthesize printer1284ID=stringFor1284ID;
@property(retain) IOBluetoothDevice *printer; // @synthesize printer;
- (id)deviceHCRPServiceRecord;
- (void)l2capChannelClosed:(id)arg1;
- (void)l2capChannelWriteComplete:(id)arg1 refcon:(void *)arg2 status:(int)arg3;
- (void)l2capChannelData:(id)arg1 data:(void *)arg2 length:(unsigned long long)arg3;
- (void)l2capChannelOpenComplete:(id)arg1 status:(int)arg2;
- (int)startOpenForL2CAPTransports:(id)arg1;
- (void)sdpQueryComplete:(id)arg1 status:(int)arg2;
- (void)printerDisconnected:(id)arg1 forDevice:(id)arg2;
- (void)connectionComplete:(id)arg1 status:(int)arg2;
- (int)transportSendPDU:(char *)arg1;
- (int)writeOnTransportBlocking:(void *)arg1 length:(unsigned int)arg2 numberOfWrittenBytes:(unsigned long long *)arg3;
- (int)writeOnTransportNonBlocking:(void *)arg1 length:(unsigned int)arg2 numberOfWrittenBytes:(unsigned long long *)arg3;
- (int)writeOnTransport:(void *)arg1 length:(unsigned int)arg2 blocking:(BOOL)arg3 numberOfWrittenBytes:(unsigned long long *)arg4;
- (int)reallocBufferForOutgoingDataForMore:(void *)arg1 length:(unsigned int)arg2;
- (unsigned short)transportConnectionMaximumTransferUnit;
- (int)closeTransportConnection;
- (int)openTransportConnection;
@property(readonly) BOOL isConnected;
- (void)finalize;
- (void)dealloc;

@end

