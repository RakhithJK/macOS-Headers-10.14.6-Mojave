//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AutoBugCaptureCore/NSURLSessionDelegate-Protocol.h>
#import <AutoBugCaptureCore/NSURLSessionTaskDelegate-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSURL, NSURLSession, NWPathEvaluator;
@protocol UploadSessionDelegate;

@interface UploadSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    NSArray *_uploadingFilesInfo;
    NSURL *_uploadDestination;
    long long _urgencyFlag;
    NSDictionary *_extraHTTPHeaders;
    NSURLSession *_urlSession;
    NSMutableArray *_uploadSessionTasks;
    NSMutableDictionary *_uploadSessionTaskToFileUploadInfo;
    NWPathEvaluator *_primaryPathEvaluator;
    long long _primaryInterfaceType;
    BOOL _radarAPI;
    BOOL _consentWasRequired;
    id <UploadSessionDelegate> _uploadManager;
    NSString *_identifier;
    NSDate *_requestedTime;
    NSDate *_scheduledTime;
    NSDate *_completedTime;
    unsigned long long _apnsIdentifier;
    NSNumber *_radarID;
}

+ (id)sessionConfigurationWithIdentifier:(id)arg1 urgency:(long long)arg2;
@property(readonly, nonatomic) long long urgencyFlag; // @synthesize urgencyFlag=_urgencyFlag;
@property(readonly, nonatomic) NSArray *uploadingFilesInfo; // @synthesize uploadingFilesInfo=_uploadingFilesInfo;
@property(retain, nonatomic) NSNumber *radarID; // @synthesize radarID=_radarID;
@property(nonatomic) unsigned long long apnsIdentifier; // @synthesize apnsIdentifier=_apnsIdentifier;
@property(nonatomic) BOOL consentWasRequired; // @synthesize consentWasRequired=_consentWasRequired;
@property(nonatomic) BOOL radarAPI; // @synthesize radarAPI=_radarAPI;
@property(retain, nonatomic) NSDate *completedTime; // @synthesize completedTime=_completedTime;
@property(retain, nonatomic) NSDate *scheduledTime; // @synthesize scheduledTime=_scheduledTime;
@property(retain, nonatomic) NSDate *requestedTime; // @synthesize requestedTime=_requestedTime;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <UploadSessionDelegate> uploadManager; // @synthesize uploadManager=_uploadManager;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_allFilesUploaded;
- (void)startUploadSession;
- (id)destinationURLForFile:(id)arg1;
- (id)uploadTaskForFileInfo:(id)arg1;
- (void)prepareUploadSession;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFilesToUpload:(id)arg1 destination:(id)arg2 urgency:(long long)arg3 additionalHTTPHeaders:(id)arg4;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

