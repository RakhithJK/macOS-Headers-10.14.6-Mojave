//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/NSURLSessionDataDelegate-Protocol.h>

@class NSMutableData, NSString, NSURLRequest, NSURLSession, NSURLSessionTask;

@interface YQLRequest : NSObject <NSURLSessionDataDelegate>
{
    NSURLSession *_defaultSession;
    NSURLSessionTask *_dataTask;
    NSURLRequest *_request;
    NSMutableData *_rawData;
}

+ (BOOL)shouldGenerateOfflineData;
+ (void)setShouldGenerateOfflineData:(BOOL)arg1;
+ (void)saveDebugString;
+ (void)appendDebugString:(id)arg1;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)YQLLanguageCode;
- (id)YQLCountryCode;
- (id)aggregateDictionaryDomain;
- (void)cancelAndInvalidate;
- (void)cancel;
- (void)failToParseWithDataSeriesDictionary:(id)arg1;
- (void)failToParseWithData:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)didParseData;
- (void)parseData:(id)arg1;
- (BOOL)isLoading;
- (void)loadRequest:(id)arg1;
- (id)taskForRequest:(id)arg1 delegate:(id)arg2;
- (void)_loadDefaultSessionIfNeeded;
- (void)_createDefaultSession;
- (void)dealloc;
- (id)init;
- (id)_yahooDoppelganger_taskForRequest:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

