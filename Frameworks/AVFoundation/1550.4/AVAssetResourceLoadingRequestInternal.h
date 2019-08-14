//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestor, AVWeakReference, NSDictionary, NSMutableData, NSMutableURLRequest, NSURLRequest, NSURLResponse;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetResourceLoadingRequestInternal : NSObject
{
    AVWeakReference *weakReference;
    AVWeakReference *weakReferenceToResourceLoader;
    struct OpaqueFigCustomURLLoader *customURLLoader;
    struct OpaqueFigCustomURLHandler *customURLHandler;
    struct __CFDictionary *requestInfo;
    unsigned long long requestID;
    long long responseInfoSentOnceToken;
    NSDictionary *requestDictionary;
    NSMutableURLRequest *URLRequest;
    NSURLResponse *response;
    NSURLRequest *redirect;
    NSObject<OS_dispatch_queue> *dataCachingQueue;
    NSMutableData *cachedData;
    NSDictionary *cachedContentInformation;
    AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
    AVAssetResourceLoadingDataRequest *dataRequest;
    int finished;
    int cancelled;
    int sentContentInfo;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    struct OpaqueFigAssetImageGenerator *figImageGenerator;
    struct OpaqueFigAsset *figAsset;
    CDUnknownBlockType streamingKeyRequestCompletionHandler;
    struct OpaqueFigCPECryptor *figCryptor;
    AVAssetResourceLoadingRequestor *requestor;
    unsigned long long cryptorKeyRequestID;
}

@end

