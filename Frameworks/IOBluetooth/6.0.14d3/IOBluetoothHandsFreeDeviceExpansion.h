//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IOBluetoothHandsFreeDeviceExpansion : NSObject
{
    struct ComponentInstanceRecord *_VPIOUnit;
    double _prevInputSampleTime;
    double _prevOutputSampleTime;
    struct AudioBufferList *_outputBufferList;
    struct _IOBluetoothRingBuffer *_SCOInputBuffer;
    struct _IOBluetoothRingBuffer *_SCOOutputBuffer;
    unsigned int _driverConnect;
}

@property struct AudioBufferList *outputBufferList; // @synthesize outputBufferList=_outputBufferList;
@property unsigned int driverConnect; // @synthesize driverConnect=_driverConnect;
@property struct _IOBluetoothRingBuffer *SCOOutputBuffer; // @synthesize SCOOutputBuffer=_SCOOutputBuffer;
@property struct _IOBluetoothRingBuffer *SCOInputBuffer; // @synthesize SCOInputBuffer=_SCOInputBuffer;
@property double prevOutputSampleTime; // @synthesize prevOutputSampleTime=_prevOutputSampleTime;
@property double prevInputSampleTime; // @synthesize prevInputSampleTime=_prevInputSampleTime;
@property struct ComponentInstanceRecord *VPIOUnit; // @synthesize VPIOUnit=_VPIOUnit;

@end

