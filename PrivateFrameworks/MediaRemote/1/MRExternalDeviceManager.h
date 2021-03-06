//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceManager : NSObject
{
    NSPointerArray *_devicesPointerArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)clearDevices;
- (void)registerDevice:(id)arg1;
- (id)deviceWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *allDevices;
- (id)init;

@end

