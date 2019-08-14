//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUGridCell.h>

#import <HomeUI/HUAccessoryViewCellProtocol-Protocol.h>

@class HFItem, HUGridServiceCellLayoutOptions, HUGridServiceCellTextView, HUIconView, HUVisualEffectContainerView, NSString, UIActivityIndicatorView, UILabel, UIView, UIVisualEffectView;
@protocol NACancelable;

@interface HUGridServiceCell : HUGridCell <HUAccessoryViewCellProtocol>
{
    BOOL _shouldColorDescription;
    BOOL _shouldShowLoadingState;
    BOOL _shouldShowRoomName;
    BOOL _hasUpdatedUISinceLastReuse;
    BOOL _showingUpdatingState;
    BOOL _showingProgressIndicator;
    HFItem *_serviceItem;
    UIView *_accessoryView;
    HUIconView *_iconView;
    HUGridServiceCellTextView *_serviceTextView;
    UILabel *_coloredDescriptionLabel;
    UIVisualEffectView *_descriptionLabelEffectView;
    id <NACancelable> _showUpdatingStateAfterDelayToken;
    id <NACancelable> _showProgressIndicatorAfterDelayToken;
    UIView *_overrideAccessoryView;
    UIActivityIndicatorView *_activityIndicator;
    HUVisualEffectContainerView *_exclamationView;
}

+ (id)_iconTintColor;
+ (Class)layoutOptionsClass;
@property(retain, nonatomic) HUVisualEffectContainerView *exclamationView; // @synthesize exclamationView=_exclamationView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIView *overrideAccessoryView; // @synthesize overrideAccessoryView=_overrideAccessoryView;
@property(retain, nonatomic) id <NACancelable> showProgressIndicatorAfterDelayToken; // @synthesize showProgressIndicatorAfterDelayToken=_showProgressIndicatorAfterDelayToken;
@property(nonatomic) BOOL showingProgressIndicator; // @synthesize showingProgressIndicator=_showingProgressIndicator;
@property(retain, nonatomic) id <NACancelable> showUpdatingStateAfterDelayToken; // @synthesize showUpdatingStateAfterDelayToken=_showUpdatingStateAfterDelayToken;
@property(nonatomic) BOOL showingUpdatingState; // @synthesize showingUpdatingState=_showingUpdatingState;
@property(nonatomic) BOOL hasUpdatedUISinceLastReuse; // @synthesize hasUpdatedUISinceLastReuse=_hasUpdatedUISinceLastReuse;
@property(retain, nonatomic) UIVisualEffectView *descriptionLabelEffectView; // @synthesize descriptionLabelEffectView=_descriptionLabelEffectView;
@property(retain, nonatomic) UILabel *coloredDescriptionLabel; // @synthesize coloredDescriptionLabel=_coloredDescriptionLabel;
@property(retain, nonatomic) HUGridServiceCellTextView *serviceTextView; // @synthesize serviceTextView=_serviceTextView;
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) BOOL shouldShowRoomName; // @synthesize shouldShowRoomName=_shouldShowRoomName;
@property(nonatomic) BOOL shouldShowLoadingState; // @synthesize shouldShowLoadingState=_shouldShowLoadingState;
@property(nonatomic) BOOL shouldColorDescription; // @synthesize shouldColorDescription=_shouldColorDescription;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) HFItem *serviceItem; // @synthesize serviceItem=_serviceItem;
- (void).cxx_destruct;
- (void)_updateExclamationViewColor;
- (void)_createExclamationViewIfNecessary;
- (void)_updateAccessoryView;
- (void)_updateSecondaryContentDisplayStyle;
- (id)_textConfiguration;
- (id)_descriptionTextAttributesWithColor:(id)arg1;
- (void)_updateText;
- (void)layoutSubviews;
- (void)displayStyleDidChange;
- (void)layoutOptionsDidChange;
- (void)_updateIconAnimated:(BOOL)arg1;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (id)item;
@property(nonatomic) BOOL disableContinuousIconAnimation;
@property(nonatomic) BOOL showProgressIndicatorAfterDelay;
@property(nonatomic) BOOL showUpdatingStateAfterDelay;
- (void)_setupServiceCell;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HUGridServiceCellLayoutOptions *layoutOptions; // @dynamic layoutOptions;
@property(readonly) Class superclass;

@end

