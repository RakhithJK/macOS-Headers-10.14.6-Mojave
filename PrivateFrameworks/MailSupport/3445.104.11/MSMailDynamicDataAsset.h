//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAssetDownloadScheduler, NSSet;

@interface MSMailDynamicDataAsset : NSObject
{
    BOOL _internal;
    BOOL _shouldIgnoreUserAccountDomains;
    NSSet *_ignoredDomains;
    MSAssetDownloadScheduler *_scheduler;
}

+ (id)_ignoredDomainsFallback;
+ (id)log;
@property(retain, nonatomic) MSAssetDownloadScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain) NSSet *ignoredDomains; // @synthesize ignoredDomains=_ignoredDomains;
@property BOOL shouldIgnoreUserAccountDomains; // @synthesize shouldIgnoreUserAccountDomains=_shouldIgnoreUserAccountDomains;
@property(nonatomic, getter=_isInternal) BOOL _internal; // @synthesize _internal;
- (void).cxx_destruct;
- (void)_updateStateFromLocalAssetURL:(id)arg1;
- (void)_updateIgnoredDomains:(id)arg1;
- (BOOL)shouldIgnoreDomain:(id)arg1;
- (id)initForInternalDevice:(BOOL)arg1;
- (void)_updateStateFromAsset:(id)arg1;
- (id)_createAssetQuery;
- (void)_downloadAssetAndUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateFromLocalAsset;

@end

