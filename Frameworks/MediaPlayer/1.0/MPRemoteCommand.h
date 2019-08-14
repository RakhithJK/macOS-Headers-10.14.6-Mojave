//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol MPRemoteCommandDelegate_Internal, MPRemoteCommandDelegate_Private, OS_dispatch_queue;

@interface MPRemoteCommand : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_targetInvocations;
    NSString *_contextID;
    BOOL _enabled;
    BOOL _observing;
    unsigned int _mediaRemoteCommandType;
    id <MPRemoteCommandDelegate_Internal> _commandCenterDelegate;
    id <MPRemoteCommandDelegate_Private> _delegate;
}

@property(nonatomic) __weak id <MPRemoteCommandDelegate_Private> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int mediaRemoteCommandType; // @synthesize mediaRemoteCommandType=_mediaRemoteCommandType;
@property(nonatomic, getter=isObserving) BOOL observing; // @synthesize observing=_observing;
@property(nonatomic) __weak id <MPRemoteCommandDelegate_Internal> commandCenterDelegate; // @synthesize commandCenterDelegate=_commandCenterDelegate;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)_addTarget:(id)arg1 action:(SEL)arg2 retainTarget:(BOOL)arg3;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newSeekCommandEventWithType:(unsigned long long)arg1;
- (id)newCommandEventWithCommandType:(unsigned int)arg1 options:(id)arg2;
- (id)newCommandEventWithPlaybackQueueOffset:(long long)arg1;
- (id)newCommandEventWithContentItemIdentifier:(id)arg1;
- (id)newCommandEvent;
- (void)notifyPropagatablePropertyChanged;
- (struct _MRMediaRemoteCommandInfo *)createCommandInfoRepresentation;
- (void)invokeCommandWithEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL hasTargets;
@property(readonly, nonatomic, getter=isSupportedAndEnabled) BOOL supportedAndEnabled;
@property(readonly, nonatomic, getter=isSupported) BOOL supported;
- (id)addTargetWithHandler:(CDUnknownBlockType)arg1;
- (void)removeTarget:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)isEnabledForContentItemIdentifier:(id)arg1;
- (BOOL)isSupportedForContentItemIdentifier:(id)arg1;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;

@end

