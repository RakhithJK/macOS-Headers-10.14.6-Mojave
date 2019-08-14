//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCNetworkOperation.h>

@class FCNetworkBehaviorMonitor, NSData, NSDictionary, NSError, NSHTTPURLResponse, NSString, NSURL;

@interface FCAssetDownloadOperation : FCNetworkOperation
{
    NSURL *_URL;
    NSString *_loggingKey;
    long long _downloadDestination;
    long long _networkEventType;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    CDUnknownBlockType _fileDownloadCompletionHandler;
    CDUnknownBlockType _dataDownloadCompletionHandler;
    NSURL *_downloadedFileURL;
    NSData *_downloadedData;
    NSString *_requestUUID;
    double _taskStartTime;
    NSDictionary *_timingData;
    NSString *_responseMIMEType;
    NSHTTPURLResponse *_httpResponse;
    unsigned long long _responseSize;
    NSError *_error;
}

+ (id)sharedURLRequestScheduler;
+ (id)sharedURLSession;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long responseSize; // @synthesize responseSize=_responseSize;
@property(retain, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(retain, nonatomic) NSString *responseMIMEType; // @synthesize responseMIMEType=_responseMIMEType;
@property(retain, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;
@property(nonatomic) double taskStartTime; // @synthesize taskStartTime=_taskStartTime;
@property(retain, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property(retain, nonatomic) NSData *downloadedData; // @synthesize downloadedData=_downloadedData;
@property(retain, nonatomic) NSURL *downloadedFileURL; // @synthesize downloadedFileURL=_downloadedFileURL;
@property(copy, nonatomic) CDUnknownBlockType dataDownloadCompletionHandler; // @synthesize dataDownloadCompletionHandler=_dataDownloadCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType fileDownloadCompletionHandler; // @synthesize fileDownloadCompletionHandler=_fileDownloadCompletionHandler;
@property(retain, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property(copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property(nonatomic) long long networkEventType; // @synthesize networkEventType=_networkEventType;
@property(nonatomic) long long downloadDestination; // @synthesize downloadDestination=_downloadDestination;
@property(copy, nonatomic) NSString *loggingKey; // @synthesize loggingKey=_loggingKey;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)throttleGroup;
- (void)resetForRetry;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end

