//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFRangeControlItem, HUQuickControlSliderViewProfile;

@interface HUQuickControlRangeViewController : HUQuickControlSingleControlViewController
{
}

+ (Class)controlItemClass;
- (id)controlToViewValueTransformer;
- (id)createViewProfile;
- (id)createInteractionCoordinator;

// Remaining properties
@property(readonly, nonatomic) HFRangeControlItem *controlItem; // @dynamic controlItem;
@property(readonly, nonatomic) HUQuickControlSliderViewProfile *viewProfile; // @dynamic viewProfile;

@end

