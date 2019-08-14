//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FRSubscriptionButton, FRTouchInsetsButton, NSString, UIView;
@protocol FRFeedBasedCollectionViewCellSubscriptionModificationDelegate;

@interface FRFeedBasedCollectionViewCell : UICollectionViewCell
{
    BOOL _notificationUIEnabled;
    BOOL _hideHighlightState;
    unsigned long long _rankInSource;
    unsigned long long _mode;
    id <FRFeedBasedCollectionViewCellSubscriptionModificationDelegate> _subscriptionModificationDelegate;
    FRSubscriptionButton *_actionButton;
    unsigned long long _previousMode;
    UIView *_highlightedScrimView;
    FRTouchInsetsButton *_notificationsBadgeButton;
}

+ (id)notificationBadgeImage;
+ (void)initialize;
@property(readonly, nonatomic) FRTouchInsetsButton *notificationsBadgeButton; // @synthesize notificationsBadgeButton=_notificationsBadgeButton;
@property(readonly, nonatomic) UIView *highlightedScrimView; // @synthesize highlightedScrimView=_highlightedScrimView;
@property(nonatomic) unsigned long long previousMode; // @synthesize previousMode=_previousMode;
@property(readonly, nonatomic) FRSubscriptionButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <FRFeedBasedCollectionViewCellSubscriptionModificationDelegate> subscriptionModificationDelegate; // @synthesize subscriptionModificationDelegate=_subscriptionModificationDelegate;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) BOOL hideHighlightState; // @synthesize hideHighlightState=_hideHighlightState;
@property(nonatomic) unsigned long long rankInSource; // @synthesize rankInSource=_rankInSource;
@property(nonatomic) BOOL notificationUIEnabled; // @synthesize notificationUIEnabled=_notificationUIEnabled;
- (void).cxx_destruct;
- (BOOL)_disableRasterizeInAnimations;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
@property(readonly, nonatomic) BOOL accessibilitySupportsCellSelection;
@property(readonly, nonatomic) NSString *accessibilityPublisherOrTopicName;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (BOOL)hasNotificationsEnabled;
@property(readonly, nonatomic) BOOL isRemovable;
@property(readonly, nonatomic) BOOL isSubscribedTo;
@property(readonly, nonatomic) BOOL isAddable;
- (void)_notificationsBadgeButtonTapped:(id)arg1;
- (void)_actionButtonTapped:(id)arg1;
- (void)_updateNotificationsBadgeButton;
- (void)_updateButtonImage;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)_updateHighlightedState;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

