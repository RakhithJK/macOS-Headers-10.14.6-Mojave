//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPairedDeviceInternal, NSString;

@interface AVPairedDevice : NSObject
{
    AVPairedDeviceInternal *_ivars;
}

+ (id)pairedDevicesConnectedToOutputDevice:(id)arg1;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
@property(readonly, nonatomic) NSString *modelID;
- (id)ID;
@property(readonly, nonatomic) NSString *pairedDeviceID;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithName:(id)arg1 ID:(id)arg2 modelID:(id)arg3 playing:(BOOL)arg4 productName:(id)arg5;

@end

