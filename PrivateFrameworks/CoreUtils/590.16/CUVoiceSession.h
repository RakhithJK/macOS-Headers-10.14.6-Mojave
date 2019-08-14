//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUVoiceRequest, NSString;
@protocol OS_dispatch_queue;

@interface CUVoiceSession : NSObject
{
    CUVoiceRequest *_currentRequest;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _invalidateFlags;
    struct NSMutableArray *_requests;
    struct LogCategory *_ucat;
    struct NSMutableArray *_voiceRequests;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)_completeAllRequestsWithError:(id)arg1;
- (void)stopSpeaking;
- (void)_speakText:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakText:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

