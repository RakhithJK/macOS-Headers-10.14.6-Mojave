//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class FRAnalyticsReferral, FRArticleViewHeadlineContext;
@protocol FRMuteChannelActivityDelegate;

@interface FRMuteChannelActivity : UIActivity
{
    BOOL _isMuted;
    FRArticleViewHeadlineContext *_headlineContext;
    FRAnalyticsReferral *_referral;
    id <FRMuteChannelActivityDelegate> _delegate;
}

@property(retain, nonatomic) id <FRMuteChannelActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isMuted; // @synthesize isMuted=_isMuted;
@property(retain, nonatomic) FRAnalyticsReferral *referral; // @synthesize referral=_referral;
@property(retain, nonatomic) FRArticleViewHeadlineContext *headlineContext; // @synthesize headlineContext=_headlineContext;
- (void).cxx_destruct;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithHeadlineContext:(id)arg1;

@end
