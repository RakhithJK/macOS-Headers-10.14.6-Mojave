//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IOAccelerator/IOAccelMTLEvent.h>

#import <Metal/MTLEvent-Protocol.h>

@class MTLIOAccelDevice, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface _MTLIOAccelMTLEvent : IOAccelMTLEvent <MTLEvent>
{
    MTLIOAccelDevice<MTLDevice> *_device;
    NSString *_label;
    unsigned long long _labelTraceID;
}

@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(copy) NSString *label;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

