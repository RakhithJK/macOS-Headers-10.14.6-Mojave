//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutBlueprintModifierType-Protocol.h"

@class NFLFeedSettings, NSString;
@protocol FCNewsAppConfigurationManager;

@interface FRFRFeedCollectionViewLayoutBlueprintRemoveGroupsModifier : NSObject <FRFeedCollectionViewLayoutBlueprintModifierType>
{
    BOOL _waitable;
    CDUnknownBlockType _groupRemovalTest;
    NFLFeedSettings *_feedSettings;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    unsigned long long _modification;
    unsigned long long _animation;
    NSString *_identifier;
    long long _priority;
}

@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long animation; // @synthesize animation=_animation;
@property(nonatomic) unsigned long long modification; // @synthesize modification=_modification;
@property(nonatomic) BOOL waitable; // @synthesize waitable=_waitable;
@property(retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(retain, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(copy, nonatomic) CDUnknownBlockType groupRemovalTest; // @synthesize groupRemovalTest=_groupRemovalTest;
- (void).cxx_destruct;
- (void)modifyBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAppConfigurationManager:(id)arg1 groupRemovalTest:(CDUnknownBlockType)arg2 feedSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

