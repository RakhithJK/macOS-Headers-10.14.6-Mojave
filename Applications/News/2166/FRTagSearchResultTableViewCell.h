//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FRSubscriptionButton, NFLFeedSettings, NSString, UIImageView;
@protocol FCTagProviding, FRFeldsparContext, FRTagSearchResultTableViewCellDelegate;

@interface FRTagSearchResultTableViewCell : UITableViewCell
{
    id <FRTagSearchResultTableViewCellDelegate> _delegate;
    FRSubscriptionButton *_subscriptionButton;
    NFLFeedSettings *_feedSettings;
    id <FCTagProviding> _channelTag;
    UIImageView *_channelLogoView;
    id <FRFeldsparContext> _feldsparContext;
    NSString *_descriptionText;
}

@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) __weak id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(readonly, nonatomic) UIImageView *channelLogoView; // @synthesize channelLogoView=_channelLogoView;
@property(copy, nonatomic) id <FCTagProviding> channelTag; // @synthesize channelTag=_channelTag;
@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(readonly, nonatomic) FRSubscriptionButton *subscriptionButton; // @synthesize subscriptionButton=_subscriptionButton;
@property(nonatomic) __weak id <FRTagSearchResultTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_clearImage;
- (void)_setTextLabelText:(id)arg1;
- (BOOL)_accessibilityPerformRemoveFromFavoritesAction;
- (BOOL)_accessibilityPerformAddToFavoritesAction;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (long long)accessibilityElementCount;
- (BOOL)isAccessibilityElement;
- (void)applyPublisherLogo:(id)arg1 animated:(BOOL)arg2;
- (void)applyTag:(id)arg1 context:(id)arg2;
- (void)setDescriptionLabelWithText:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

