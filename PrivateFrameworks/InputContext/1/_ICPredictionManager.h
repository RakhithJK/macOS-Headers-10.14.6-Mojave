//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICPredictionManaging-Protocol.h>

@class NSArray, NSString, _ICResultCache;

@interface _ICPredictionManager : NSObject <_ICPredictionManaging>
{
    NSArray *_predictionSources;
    _ICResultCache *_cache;
}

@property(retain) _ICResultCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)hibernate;
- (void)warmUp;
- (id)workLocation;
- (id)searchForMeCardEmailAddresses;
- (id)searchForMeCardRegions;
- (void)reset;
- (void)predictedItemSelected:(id)arg1;
- (id)_quickTypePredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(unsigned long long)arg3 error:(id *)arg4;
- (id)lastCachedResultWithInitialCharacters:(id)arg1;
- (id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id *)arg7;
- (id)searchWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 error:(id *)arg4;
- (id)initWithPredictionSources:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

