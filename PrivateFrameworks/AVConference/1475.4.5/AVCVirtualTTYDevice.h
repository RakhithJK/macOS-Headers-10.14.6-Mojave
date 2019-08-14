//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient;
@protocol AVCVirtualTTYDeviceDelegate;

@interface AVCVirtualTTYDevice : NSObject
{
    AVConferenceXPCClient *_connection;
    id _delegate;
    BOOL _isStarted;
}

@property(nonatomic) id <AVCVirtualTTYDeviceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)terminateSession;
- (void)deregisterBlocksForDelegateNotifications;
- (void)registerBlocksForDelegateNotifications;
- (BOOL)sendText:(struct NSString *)arg1;
- (id)sendCharacter:(unsigned short)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithMode:(long long)arg1 error:(id *)arg2 streamToken:(long long)arg3;
- (id)initWithMode:(long long)arg1 error:(id *)arg2;
- (id)initWithStreamToken:(long long)arg1 error:(id *)arg2;

@end

