//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFTransformItemProvider, HOPresenceActivationOptionItem;

@interface HOPresenceActivationOptionState : NSObject
{
    BOOL _expanded;
    struct HFTransformItemProvider *_userOptionItemProvider;
    HOPresenceActivationOptionItem *_activationOptionItem;
}

@property(readonly, nonatomic) HOPresenceActivationOptionItem *activationOptionItem; // @synthesize activationOptionItem=_activationOptionItem;
@property(readonly, nonatomic) HFTransformItemProvider *userOptionItemProvider; // @synthesize userOptionItemProvider=_userOptionItemProvider;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
- (void).cxx_destruct;
@property(nonatomic, getter=isSelected) BOOL selected;
@property(readonly, nonatomic) unsigned long long activationGranularity;
- (id)initWithUserOptionItemProvider:(struct HFTransformItemProvider *)arg1 activationOptionItem:(id)arg2;
- (id)init;

@end

