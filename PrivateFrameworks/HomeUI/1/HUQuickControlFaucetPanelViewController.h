//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUQuickControlViewController.h>

@class HFChildServiceControlItem, HFControlItem, HFTemperatureThresholdControlItem, HUQuickControlCollectionViewController;
@protocol HFPrimaryStateWriter;

@interface HUQuickControlFaucetPanelViewController : HUQuickControlViewController
{
    HUQuickControlCollectionViewController *_collectionViewController;
}

+ (id)controlItemPredicate;
+ (id)_primaryStatePredicate;
+ (id)_childValvesPredicate;
+ (id)_temperaturePredicate;
@property(readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) HFChildServiceControlItem *childValvesControlItem;
@property(readonly, nonatomic) HFTemperatureThresholdControlItem *temperatureControlItem;
@property(readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem;
- (id)_controlItemMatchingPredicate:(id)arg1;
- (id)overrideStatusText;
- (id)childQuickControlContentViewControllers;
- (void)viewDidLoad;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;

@end

