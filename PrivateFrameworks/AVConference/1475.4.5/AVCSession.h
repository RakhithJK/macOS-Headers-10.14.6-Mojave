//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/AVCSessionParticipantControlProtocol-Protocol.h>
#import <AVConference/AVCSessionParticipantDelegate-Protocol.h>

@class AVCSessionConfiguration, AVCSessionParticipant, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString, VCXPCClientShared;
@protocol AVCSessionDelegate, OS_dispatch_queue;

@interface AVCSession : NSObject <AVCSessionParticipantDelegate, AVCSessionParticipantControlProtocol>
{
    NSMutableDictionary *_remoteParticipants;
    NSMutableDictionary *_participantsToAdd;
    AVCSessionParticipant *_localParticipant;
    AVCSessionConfiguration *_configuration;
    NSString *_transportToken;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    VCXPCClientShared *_connection;
    long long _sessionToken;
    NSDictionary *_capabilities;
    NSString *_uuid;
    NSData *_frequencyLevels;
    int _activeConfigurationCount;
}

@property(retain, nonatomic) NSDictionary *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) long long sessionToken; // @synthesize sessionToken=_sessionToken;
@property(readonly, nonatomic) VCXPCClientShared *xpcConnection; // @synthesize xpcConnection=_connection;
@property(readonly, nonatomic) AVCSessionParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
@property(readonly, nonatomic) NSMutableDictionary *participantsToAdd; // @synthesize participantsToAdd=_participantsToAdd;
@property(readonly, nonatomic) NSData *frequencyLevels; // @synthesize frequencyLevels=_frequencyLevels;
@property(readonly, nonatomic) NSMutableDictionary *remoteParticipantsMap; // @synthesize remoteParticipantsMap=_remoteParticipants;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateNotificationQueue; // @synthesize delegateNotificationQueue=_delegateNotificationQueue;
@property(retain, nonatomic) AVCSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)participant:(id)arg1 videoPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
- (void)participant:(id)arg1 audioPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
- (void)participant:(id)arg1 videoEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
- (void)participant:(id)arg1 audioEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
- (void)participant:(id)arg1 frequencyLevelsDidChange:(id)arg2;
- (void)setupNotificationQueue:(id)arg1;
- (void)deregisterFromNotifications;
- (void)registerBlocksForNotifications;
- (id)newNSErrorWithErrorDictionary:(id)arg1;
- (void)endParticipantConfiguration;
- (void)beginParticipantConfiguration;
- (void)updateConfiguration:(id)arg1;
- (void)stop;
- (void)start;
- (void)removeParticipants:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (BOOL)validateParticipantToRemove:(id)arg1;
- (BOOL)validateParticipantToAdd:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)addParticipant:(id)arg1;
- (id)initWithTransportToken:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 queue:(id)arg4;
@property(nonatomic) id <AVCSessionDelegate> delegate;
@property(nonatomic) float volume;
@property(nonatomic, getter=isAudioMuted) BOOL audioMuted;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property(nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property(nonatomic, getter=isVideoPaused) BOOL videoPaused;
@property(nonatomic, getter=isAudioPaused) BOOL audioPaused;
@property(readonly, nonatomic) NSData *negotiationData;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSArray *remoteParticipants;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

