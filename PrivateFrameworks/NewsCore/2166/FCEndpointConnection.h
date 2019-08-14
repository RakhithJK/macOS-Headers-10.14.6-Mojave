//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCoreConfigurationObserving-Protocol.h>
#import <NewsCore/NSURLSessionDelegate-Protocol.h>

@class FCAsyncSerialQueue, NSString, NSURL, NSURLSession;
@protocol FCCoreConfigurationManager;

@interface FCEndpointConnection : NSObject <NSURLSessionDelegate, FCCoreConfigurationObserving>
{
    id <FCCoreConfigurationManager> _configurationManager;
    NSURLSession *_session;
    NSURL *_baseURL;
    FCAsyncSerialQueue *_requestSerialQueue;
}

+ (id)_CAPIBaseURLStringFromConfiguration:(id)arg1;
+ (id)_errorByUpdatingRetryStatusForError:(id)arg1;
+ (id)_errorForStatus:(long long)arg1 url:(id)arg2;
@property(readonly, nonatomic) FCAsyncSerialQueue *requestSerialQueue; // @synthesize requestSerialQueue=_requestSerialQueue;
@property(copy) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
- (void).cxx_destruct;
- (void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(BOOL)arg7 callbackQueue:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(BOOL)arg6 callbackQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)initWithConfigurationManager:(id)arg1 sourceApplicationBundleIdentifier:(id)arg2;
- (id)initWithConfigurationManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

