//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/AVAudioPlayerDelegate-Protocol.h>

@class CUAudioRequest, NSString;
@protocol OS_dispatch_queue;

@interface CUAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    CUAudioRequest *_currentRequest;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _invalidateFlags;
    struct NSMutableArray *_playRequests;
    struct NSMutableDictionary *_preparedRequests;
    CUAudioPlayer *_selfRef;
    struct LogCategory *_ucat;
    unsigned int _flags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)_abortRequestsWithError:(id)arg1;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)_processRequests;
- (void)_prepareURL:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareURL:(id)arg1 identifier:(id *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_playURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_playPreparedIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playPreparedIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidated;
- (void)_invalidateWithFlags:(unsigned int)arg1;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (void)_activate;
- (void)activate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

