//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutBlueprintModifierType-Protocol.h"

@class FRFeedCollectionViewLayoutBlueprintVisibilityDetector, NFLFeedSettings, NSString;

@interface FRFeedCollectionViewLayoutBlueprintSubscriptionModifier : NSObject <FRFeedCollectionViewLayoutBlueprintModifierType>
{
    BOOL _waitable;
    FRFeedCollectionViewLayoutBlueprintVisibilityDetector *_visibilityDetector;
    unsigned long long _modification;
    NSString *_identifier;
    long long _priority;
    NFLFeedSettings *_feedSettings;
}

@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long modification; // @synthesize modification=_modification;
@property(nonatomic) BOOL waitable; // @synthesize waitable=_waitable;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprintVisibilityDetector *visibilityDetector; // @synthesize visibilityDetector=_visibilityDetector;
- (void).cxx_destruct;
- (void)modifyBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeSubscriptionPlacardFromBlueprintIfPresent:(id)arg1;
- (id)subscriptionPlacardSectionInBlueprint:(id)arg1;
- (id)initWithVisibilityDetector:(id)arg1 feedSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

