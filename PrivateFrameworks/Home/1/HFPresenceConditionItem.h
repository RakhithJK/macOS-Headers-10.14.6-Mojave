//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFConditionItem-Protocol.h>

@class HFPresenceCondition, HMHome, NSString;

@interface HFPresenceConditionItem : HFItem <HFConditionItem>
{
    HFPresenceCondition *_condition;
    HMHome *_home;
}

@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HFPresenceCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithCondition:(id)arg1 home:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

