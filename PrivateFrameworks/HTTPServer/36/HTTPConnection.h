//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCDAsyncSocket, HTTPConfig, HTTPMessage, NSMutableArray, NSString;
@protocol HTTPResponse, OS_dispatch_queue;

@interface HTTPConnection : NSObject
{
    NSObject<OS_dispatch_queue> *connectionQueue;
    GCDAsyncSocket *asyncSocket;
    HTTPConfig *config;
    BOOL started;
    HTTPMessage *request;
    unsigned int numHeaderLines;
    BOOL sentResponseHeaders;
    NSString *nonce;
    long long lastNC;
    NSObject<HTTPResponse> *httpResponse;
    NSMutableArray *ranges;
    NSMutableArray *ranges_headers;
    NSString *ranges_boundry;
    int rangeIndex;
    unsigned long long requestContentLength;
    unsigned long long requestContentLengthReceived;
    unsigned long long requestChunkSize;
    unsigned long long requestChunkSizeReceived;
    NSMutableArray *responseDataSizes;
    unsigned long long posthumousCountedBytesWritten;
    unsigned int replyStarted:1;
    unsigned int ignoreBodyData:1;
    unsigned int disconnectAfterResponding:1;
    unsigned long long requestBodyState;
}

+ (id)parseParams:(id)arg1;
+ (BOOL)hasRecentNonce:(id)arg1;
+ (id)generateNonce;
+ (void)initialize;
- (void).cxx_destruct;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (id)readDataOfLength:(unsigned long long)arg1 orLimit:(unsigned long long)arg2;
- (id)url;
- (void)resetBodyBytesWritten;
- (unsigned long long)bodyBytesWritten;
- (void)die;
- (BOOL)shouldDie;
- (void)finishResponse;
- (void)responseDidAbort:(id)arg1;
- (void)responseHasAvailableData:(id)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (id)preprocessErrorResponse:(id)arg1;
- (id)preprocessResponse:(id)arg1;
- (id)dateAsString:(id)arg1;
- (void)handleInternalServerError;
- (void)handleNotAvailable;
- (void)handleNotImplemented;
- (void)handleResourceNotFound;
- (void)handleUnknownMethod:(id)arg1;
- (void)handleInvalidRequest:(id)arg1;
- (void)handleAuthenticationFailed;
- (void)handleVersionNotSupported:(id)arg1;
- (void)finishBody;
- (void)processBodyData:(id)arg1;
- (void)prepareForBodyWithSize:(unsigned long long)arg1;
- (void)readMoreBodyDataNow;
- (BOOL)shouldReadMoreBodyDataNow;
- (unsigned long long)requestBodyChunkSize;
- (unsigned short)connectedPort;
- (id)connectedHost;
- (void)startResponseForMethod:(id)arg1 URI:(id)arg2;
- (id)httpResponseForMethod:(id)arg1 URI:(id)arg2;
- (id)filePathForURI:(id)arg1 allowDirectory:(BOOL)arg2;
- (id)filePathForURI:(id)arg1;
- (id)directoryIndexFileNames;
- (void)setReceiveBufferSize:(int)arg1;
- (int)receiveBufferSize;
- (void)continueSendingMultiRangeResponseBody;
- (void)continueSendingSingleRangeResponseBody;
- (void)continueSendingStandardResponseBody;
- (unsigned long long)writeQueueSize;
- (void)sendResponseHeadersAndBody;
- (id)chunkedTransferFooter;
- (id)chunkedTransferSizeLineForLength:(unsigned long long)arg1;
- (id)newMultiRangeResponse:(unsigned long long)arg1;
- (id)newUniRangeResponse:(unsigned long long)arg1;
- (void)replyToHTTPRequest;
- (id)requestURI;
- (BOOL)parseRangeRequest:(id)arg1 withContentLength:(unsigned long long)arg2;
- (id)parseGetParams;
- (id)parseParams:(id)arg1;
- (void)readRequestBody;
- (void)startReadingRequest;
- (void)startConnection;
- (void)stopAfterResponding;
- (void)stop;
- (void)start;
- (void)addBasicAuthChallenge:(id)arg1;
- (void)addDigestAuthChallenge:(id)arg1;
- (BOOL)isAuthenticated;
- (id)passwordForUser:(id)arg1;
- (id)realm;
- (BOOL)useDigestAccessAuthentication;
- (BOOL)isPasswordProtected:(id)arg1;
- (void)customizeSSLSettings:(id)arg1;
- (const unsigned int *)sslCipherSuites:(unsigned long long *)arg1;
- (id)sslIdentityAndCertificates;
- (BOOL)isSecureServer;
- (BOOL)supportsStreamedRequestBody;
- (BOOL)expectsDelayedResponse;
- (BOOL)expectsRequestBodyFromMethod:(id)arg1 atPath:(id)arg2;
- (BOOL)supportsMethod:(id)arg1 atPath:(id)arg2;
- (void)dealloc;
- (id)initWithAsyncSocket:(id)arg1 configuration:(id)arg2;

@end

