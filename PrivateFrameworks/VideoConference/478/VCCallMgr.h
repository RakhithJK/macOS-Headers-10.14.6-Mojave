//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSString, SDPAnalyzer, VideoConferenceMultiController;

__attribute__((visibility("hidden")))
@interface VCCallMgr : NSObject
{
    NSLock *lock;
    NSMutableDictionary *dictIncomingCalls;
    NSMutableDictionary *dictOutgoingCalls;
    NSMutableDictionary *_globalAttributesDictionary;
    NSMutableDictionary *dictHangupCalls;
    NSMutableDictionary *_confStatusMap;
    NSMutableDictionary *mapUserIDToCallID;
    NSMutableDictionary *participantUserIDToConfIndex;
    NSMutableDictionary *mapUserIDToSecurityInfo;
    NSLock *_SecurityInfoLock;
    BOOL fSecurityInfoPaused;
    BOOL fSecurityEnabledValue;
    BOOL fSecurityValidValue;
    NSMutableArray *participantUpdateQueue;
    SDPAnalyzer *_callerSDP;
    SDPAnalyzer *_calleeSDP;
    int _curCallID;
    int _callIDIter;
    int _microphoneDevice;
    unsigned int _speakerDevice;
    NSDate *_callStartTime;
    double _lastCallDuration;
    struct tagRTPHANDLES _localRTPHandles;
    NSString *_localUserName;
    NSLock *_initiateLock;
    NSLock *_confStatusLock;
    NSLock *_determineFocusCapabilityLock;
    NSLock *_BWDThreadLock;
    NSLock *_deferVideoFormatLock;
    NSLock *_delegateLock;
    NSLock *_participantUserIDToConfIndexLock;
    NSLock *_userIDToCallIDMapLock;
    NSLock *_vcCameraLock;
    BOOL _didStartTransmitForNonFocus;
    BOOL _multiPartyConference;
    BOOL _isTransmitting;
    BOOL _BWDThreadRunning;
    BOOL _confStatusConnected;
    BOOL _startedAuxiliaryInput;
    VideoConferenceMultiController *_vcControllerInstance;
    id _vcDelegate;
    id _vcRenderDelegate;
    BOOL _vcDelegateConformsToDelegateProtocol;
    int _confUpstream;
    int _confDownstream;
    struct _VCFocusCapability _focusCapability;
    unsigned long long _lastCameraGUID;
    unsigned int _lastCameraDevice;
    BOOL _usePCMUWideband;
    BOOL _useSpeex;
    BOOL _useSpeex32K;
    int _auxVideoInputMode;
    BOOL _sideShowEnabled;
    BOOL _replacementMode;
    int _commNATResult;
    int _iPreviewing;
    int _iResumePreview;
    NSString *_SNATMAPIPAddress;
    unsigned short _SNATMAPPort;
    unsigned long long _ipSNATMAP;
    BOOL _multiwayBWDPauseEnabled;
}

+ (id)defaultCallMgr;
@property int _iResumePreview; // @synthesize _iResumePreview;
@property int _iPreviewing; // @synthesize _iPreviewing;
@property(getter=isMultiwayBWDPauseEnabled) BOOL multiwayBWDPauseEnabled; // @synthesize multiwayBWDPauseEnabled=_multiwayBWDPauseEnabled;
@property unsigned long long _ipSNATMAP; // @synthesize _ipSNATMAP;
@property unsigned short _SNATMAPPort; // @synthesize _SNATMAPPort;
@property(copy) NSString *_SNATMAPIPAddress; // @synthesize _SNATMAPIPAddress;
- (void)addCommNATResultToErrorReporter;
- (int)commNATResult;
- (void)setCommNATResult:(int)arg1;
- (void)setAuxiliaryVideoInputMode:(int)arg1;
- (BOOL)getReplacementMode;
- (void)setReplacementMode:(BOOL)arg1;
- (BOOL)getSideShowEnabled;
- (void)setSideShowEnabled:(BOOL)arg1;
- (int)auxiliaryVideoInputMode;
- (void)setUseSpeex32K:(BOOL)arg1;
- (BOOL)useSpeex32K;
- (void)setUseSpeex:(BOOL)arg1;
- (BOOL)useSpeex;
- (void)setUsePCMUWideband:(BOOL)arg1;
- (BOOL)usePCMUWideband;
- (void)setStartedAuxiliaryInput:(BOOL)arg1;
- (BOOL)startedAuxiliaryInput;
- (unsigned int)lastCameraDevice;
- (void)setLastCameraDevice:(unsigned int)arg1;
- (unsigned long long)lastCameraGUID;
- (void)setLastCameraGUID:(unsigned long long)arg1;
- (void)setSecurityInfoPaused:(BOOL)arg1;
- (void)clearSecurityInfo;
- (struct OpaqueSecCertificateRef *)getRemoteCertificateForUser:(id)arg1;
- (BOOL)isSecurityValidForUser:(id)arg1;
- (BOOL)isSecurityEnabledForUser:(id)arg1;
- (void)setSecurityInfoValid:(BOOL)arg1 forUser:(id)arg2;
- (void)setSecurityInfoEnabled:(BOOL)arg1 forUser:(id)arg2;
- (void)setSecurityInfoCertificate:(struct OpaqueSecCertificateRef *)arg1 forUser:(id)arg2;
- (void)setConfStatusConnected:(BOOL)arg1;
- (void)sendConfStatusUpdateToiChat;
- (void)removeConfStatus:(id)arg1;
- (void)addConfStatusForUserID:(id)arg1 status:(int)arg2 confIndex:(int)arg3 userInfo:(id)arg4;
- (void)confStatusMapRemoveAll;
- (void)getFocusCapability:(struct _VCFocusCapability *)arg1;
- (void)setFocusCapability:(struct _VCFocusCapability *)arg1;
- (int)BWDDownstreamKbits;
- (int)BWDUpstreamKbits;
- (void)setIsTransmitting:(BOOL)arg1;
- (BOOL)isTransmitting;
- (void)setMultiPartyConference:(BOOL)arg1;
- (BOOL)isMultiPartyConference;
- (void)setDidStartTransmitForNonFocus:(BOOL)arg1;
- (BOOL)didStartTransmitForNonFocus;
- (id)vcCameraLock;
- (id)deferVideoFormatLock;
- (id)determineFocusCapabilityLock;
- (id)userIDToCallIDMapLock;
- (id)confStatusLock;
- (id)initiateLock;
- (void)clearConfIndexForUserID;
- (int)confIndexForUserID:(id)arg1;
- (void)setConfIndex:(int)arg1 forUserID:(id)arg2;
- (id)vcRenderDelegate;
- (void)setVCRenderDelegate:(id)arg1;
- (BOOL)vcDelegateConformsToDelegateProtocol;
- (void)setVCDelegate:(id)arg1;
- (void)setVCControllerInstance:(id)arg1;
- (id)vcDelegate;
- (id)vcControllerInstance;
- (id)getParticipantUpdateQueue;
- (id)userIDForConfIndex:(unsigned int)arg1;
- (id)userIDForCallID:(unsigned int)arg1;
- (id)hardwareInfoArrayFromMap;
- (void)smallestNonfocusBitrate:(int *)arg1 framerate:(int *)arg2;
- (void)peerToPeerInfoFromMapForUserID:(id)arg1 payload:(int *)arg2 transmitWidth:(int *)arg3 transmitHeight:(int *)arg4 transmitBitrate:(int *)arg5 transmitFramerate:(int *)arg6;
- (void)setPeerToPeerInfoInMapForUserID:(id)arg1 payload:(int)arg2 transmitWidth:(int)arg3 transmitHeight:(int)arg4 transmitBitrate:(int)arg5 transmitFramerate:(int)arg6;
- (int)callIDFromMapForUserID:(id)arg1;
- (int)confIndexFromMapForUserID:(id)arg1;
- (id)userIDToCallIDMap;
- (id)localUserName;
- (void)setLocalUserName:(id)arg1;
- (void)setBWDThreadRunning:(BOOL)arg1;
- (BOOL)BWDThreadRunning;
- (double)lastCallDuration;
- (void)endCallTimer;
- (id)callStartTime;
- (void)startCallTimer;
- (struct tagRTPHANDLES *)RTPHandles;
- (void)setRTPHandles:(struct tagRTPHANDLES *)arg1;
- (void)setSpeakerDevice:(unsigned int)arg1;
- (int)speakerDevice;
- (int)microphoneDevice;
- (id)globalAttributesDictionary;
- (int)callIDIter;
- (int)getIncrementedCallIDIter;
- (int)curCallID;
- (void)setCurCallID:(int)arg1;
- (void)finishedCallHangup:(int)arg1;
- (BOOL)hangupCall:(int)arg1;
- (BOOL)existOutgoingCallID:(int)arg1 andRemove:(BOOL)arg2;
- (void)addOutgoingCall:(int)arg1;
- (int)size;
- (BOOL)cancelCallID:(int)arg1;
- (BOOL)acceptCallID:(int)arg1;
- (BOOL)existCallID:(int)arg1;
- (id)getCallData:(int)arg1;
- (void)addCall:(int)arg1 withData:(id)arg2;
- (void)dealloc;
- (id)init;

@end

