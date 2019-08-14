//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

@interface SKDownload : NSObject
{
    id _internal;
}

+ (void)deleteContentForProductID:(id)arg1;
+ (id)contentURLForProductID:(id)arg1;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)_setVersion:(id)arg1;
- (void)_setTransaction:(id)arg1;
- (void)_setTimeRemaining:(double)arg1;
- (void)_setProgress:(float)arg1;
- (void)_setError:(id)arg1;
- (void)_setDownloadState:(long long)arg1;
- (void)_setContentURL:(id)arg1;
- (void)_setContentLength:(id)arg1;
- (void)_setContentIdentifier:(id)arg1;
@property(copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID;
- (void)_applyChangeset:(id)arg1;
@property(readonly, nonatomic) SKPaymentTransaction *transaction;
@property(readonly, nonatomic) double timeRemaining;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSString *contentVersion;
@property(readonly, copy, nonatomic) NSNumber *contentLength;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) NSURL *contentURL;
@property(readonly, nonatomic) long long downloadState;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) NSString *contentIdentifier;
- (id)init;

@end

