//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HMHome;
@protocol HFServiceLikeItem;

@interface HOServiceDetailsAbstractItem : HFItem
{
    HFItem<HFServiceLikeItem> *_sourceServiceItem;
    HMHome *_home;
}

@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HFItem<HFServiceLikeItem> *sourceServiceItem; // @synthesize sourceServiceItem=_sourceServiceItem;
- (void).cxx_destruct;
- (BOOL)isBridge;
- (BOOL)isCamera;
- (BOOL)isMediaAccessoryGroup;
- (BOOL)isMediaAccessory;
- (BOOL)isAccessory;
- (BOOL)isContainedWithinItemGroup;
- (BOOL)isItemGroup;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourceServiceItem:(id)arg1 home:(id)arg2;
- (id)init;

@end

