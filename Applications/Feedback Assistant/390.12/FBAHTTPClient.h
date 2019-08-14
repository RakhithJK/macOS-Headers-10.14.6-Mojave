//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBABackgroundDataClient-Protocol.h"
#import "FBAForegroundDataClient-Protocol.h"
#import "FBALoginManagerDelegate-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSString, NSURLSession;

@interface FBAHTTPClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, FBAForegroundDataClient, FBABackgroundDataClient, FBALoginManagerDelegate>
{
    BOOL _didTearDown;
    unsigned long long _clientType;
    NSURLSession *_session;
}

@property BOOL didTearDown; // @synthesize didTearDown=_didTearDown;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property unsigned long long clientType; // @synthesize clientType=_clientType;
- (void).cxx_destruct;
- (void)tearDown;
- (id)backgroundSessionIdentifier;
- (id)bundle;
- (void)logHTTPErrorWithResponse:(id)arg1 withData:(id)arg2 fromRequest:(id)arg3;
- (id)_keyValuePairsForKey:(id)arg1 value:(id)arg2;
- (id)_formEncodedBodyForDictionary:(id)arg1;
- (id)contentTypeForParameterEncoding:(unsigned long long)arg1;
- (id)bodyDataForParameters:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)getOngoingTasks:(CDUnknownBlockType)arg1;
- (id)beginUploadWithRequest:(id)arg1 fromFileURL:(id)arg2;
- (void)performHTTPMethod:(id)arg1 toURL:(id)arg2 parameters:(id)arg3 encoding:(unsigned long long)arg4 success:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)deleteAtURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)deleteResourceAtURL:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)putToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)postToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)jsonForURL:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)dataForURL:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)jsonForURLRequest:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)dataForURLRequest:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)didLogInWithUsername:(id)arg1 participantID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didLogOutWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithClientType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
