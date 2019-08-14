//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AutoBugCaptureCore/APSConnectionDelegate-Protocol.h>

@class APSConnection, NSData, NSString;
@protocol OS_dispatch_queue;

@interface ApplePushNotificationHandler : NSObject <APSConnectionDelegate>
{
    BOOL _apsEnabled;
    BOOL _apsDevEnvironment;
    APSConnection *_apsConnection;
    NSData *_apsToken;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (unsigned long long)currentEnvironment;
+ (id)apnsTokenString;
+ (id)stringFromData:(id)arg1;
+ (void)deactivate;
+ (void)activate;
+ (BOOL)shouldEnableAPNS;
+ (BOOL)apnsEnabled;
+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL apsDevEnvironment; // @synthesize apsDevEnvironment=_apsDevEnvironment;
@property(readonly, nonatomic) BOOL apsEnabled; // @synthesize apsEnabled=_apsEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSData *apsToken; // @synthesize apsToken=_apsToken;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
- (void).cxx_destruct;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_parseUserInfo:(id)arg1 apnsIdentifier:(unsigned long long)arg2;
- (void)_parseAPSIncomingMessage:(id)arg1;
- (void)_shutdownApsConnection;
- (void)_createApsConnection;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

