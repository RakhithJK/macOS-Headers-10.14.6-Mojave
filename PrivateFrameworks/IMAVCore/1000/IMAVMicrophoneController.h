//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAVMicrophone, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IMAVMicrophoneController : NSObject
{
    id _internal;
    NSMutableArray *_microphones;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMAVMicrophone *currentMicrophone;
- (void)_loadSavedMicrophone;
- (void)_rebuildMicrophoneList;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSArray *microphones;
- (id)init;

@end

