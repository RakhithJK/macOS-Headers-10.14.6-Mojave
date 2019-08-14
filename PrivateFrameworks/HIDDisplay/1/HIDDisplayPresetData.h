//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HIDDisplayPresetInterface, NSData;

@interface HIDDisplayPresetData : NSObject
{
    long long _index;
    HIDDisplayPresetInterface *_deviceRef;
}

- (void).cxx_destruct;
@property(readonly) NSData *uniqueID;
- (BOOL)set:(id)arg1 error:(id *)arg2;
- (id)get:(id *)arg1;
@property(readonly) BOOL writable;
@property(readonly) BOOL valid;
- (void)setHidDisplay:(id)arg1;
- (id)hidDisplay;
- (id)initWithDisplayDevice:(id)arg1 index:(long long)arg2;

@end

