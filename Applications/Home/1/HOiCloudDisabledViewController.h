//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HUPreloadableViewController-Protocol.h"

@class HUColoredButton, NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface HOiCloudDisabledViewController : UIViewController <HUPreloadableViewController>
{
    unsigned long long _dataSyncState;
    unsigned long long _status;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    HUColoredButton *_preferencesButton;
    UIView *_containerView;
    NSLayoutConstraint *_bodyWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bodyWidthConstraint; // @synthesize bodyWidthConstraint=_bodyWidthConstraint;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) HUColoredButton *preferencesButton; // @synthesize preferencesButton=_preferencesButton;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
- (void).cxx_destruct;
- (void)preferencesButtonTapped;
- (void)updateLabels;
- (id)hu_preloadContent;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

