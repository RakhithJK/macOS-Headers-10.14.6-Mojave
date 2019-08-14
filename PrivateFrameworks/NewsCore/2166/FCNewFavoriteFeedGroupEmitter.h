//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupEmitting-Protocol.h>

@class NSSet, NSString;

@interface FCNewFavoriteFeedGroupEmitter : NSObject <FCFeedGroupEmitting>
{
}

@property(readonly, copy, nonatomic) NSString *groupEmitterIdentifier;
@property(readonly, copy, nonatomic) NSSet *emittableGroupTypes;
- (BOOL)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL emitsSingleRefreshSessionGroups;
@property(readonly, nonatomic) BOOL emitsSingletonGroups;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isRequiredByFollowingEmitters;
@property(readonly, nonatomic) long long requiredForYouContentTypes;
@property(readonly, nonatomic) BOOL requiresHeavyweightContent;
@property(readonly) Class superclass;

@end

