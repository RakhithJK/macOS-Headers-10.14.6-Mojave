//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSIndexJob, NSArray;

@interface SPCoreSpotlightIndexerTask : NSObject
{
    BOOL _shouldResumeOnFailure;
    CSIndexJob *_job;
    NSArray *_indexers;
    NSArray *_bundleIDs;
    NSArray *_completedBundleIDs;
    unsigned long long _dataMigrationStage;
}

@property(nonatomic) BOOL shouldResumeOnFailure; // @synthesize shouldResumeOnFailure=_shouldResumeOnFailure;
@property(nonatomic) unsigned long long dataMigrationStage; // @synthesize dataMigrationStage=_dataMigrationStage;
@property(retain, nonatomic) NSArray *completedBundleIDs; // @synthesize completedBundleIDs=_completedBundleIDs;
@property(retain, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(readonly, nonatomic) NSArray *indexers; // @synthesize indexers=_indexers;
@property(readonly, nonatomic) CSIndexJob *job; // @synthesize job=_job;
- (void).cxx_destruct;
- (id)initWithIndexJob:(id)arg1 indexers:(id)arg2;

@end

