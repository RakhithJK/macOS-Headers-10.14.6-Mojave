//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LUI2ClassroomLockController, NSString;
@protocol OS_dispatch_source;

@interface ClassroomLock : NSObject
{
    LUI2ClassroomLockController *_clController;
    NSObject<OS_dispatch_source> *_monitoredProcessSource;
    NSString *_captionInternal;
    struct __CFMachPort *_eventTap;
    struct __CFRunLoopSource *_eventTapRunLoopSource;
}

+ (id)sharedClassroomLock;
@property struct __CFRunLoopSource *eventTapRunLoopSource; // @synthesize eventTapRunLoopSource=_eventTapRunLoopSource;
@property struct __CFMachPort *eventTap; // @synthesize eventTap=_eventTap;
@property(retain) NSString *captionInternal; // @synthesize captionInternal=_captionInternal;
@property(retain) NSObject<OS_dispatch_source> *monitoredProcessSource; // @synthesize monitoredProcessSource=_monitoredProcessSource;
@property(retain) LUI2ClassroomLockController *clController; // @synthesize clController=_clController;
- (void)dealloc;
- (void)hideClassroomLock;
- (void)showClassroomLock;
@property(readonly) BOOL isVisible;
@property int remoteProcess;
@property NSString *caption;
- (void)_startSleepDisplayTimer:(double)arg1;
- (double)_screenFadeOutTimeInterval;
- (void)_clearRemoteProcess;
- (void)_disableGestures;
- (void)_enableGestures;

@end

