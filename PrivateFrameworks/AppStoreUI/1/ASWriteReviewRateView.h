//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppStoreUI/ASWriteReviewDialogView.h>

@class ASRatingControl, NSTextField;

@interface ASWriteReviewRateView : ASWriteReviewDialogView
{
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    ASRatingControl *_ratingControl;
}

@property(readonly, nonatomic) ASRatingControl *ratingControl; // @synthesize ratingControl=_ratingControl;
@property(readonly, nonatomic) NSTextField *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithConfiguration:(id)arg1 frame:(struct CGRect)arg2;

@end

