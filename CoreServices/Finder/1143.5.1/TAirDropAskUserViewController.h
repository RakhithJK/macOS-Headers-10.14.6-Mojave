//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IAirDropStateViewController.h"

@class IAirDropProgressViewController, NSStackView, NSString, TButton, TImageView, TTextField;

@interface TAirDropAskUserViewController : IAirDropStateViewController
{
    IAirDropProgressViewController *_controller;
    TImageView *_imageView;
    TTextField *_mainTextFld;
    NSStackView *_stackView;
    TButton *_otherButton;
    struct TString _mainTextStr;
    struct TString _okButtonTitle;
    struct TString _cancelButtonTitle;
    struct TString _otherButtonTitle;
    int _viewType;
}

@property(readonly, nonatomic) int viewType; // @synthesize viewType=_viewType;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *otherButtonTitle; // @dynamic otherButtonTitle;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @dynamic cancelButtonTitle;
@property(copy, nonatomic) NSString *okButtonTitle; // @dynamic okButtonTitle;
@property(copy, nonatomic) NSString *mainTextStr; // @dynamic mainTextStr;
- (_Bool)isInAskUserMode;
- (void)setViewType:(int)arg1 withMainTextStr:(const struct TString *)arg2;
- (id)imageView;
- (void)aboutToTearDown;
- (void)viewLoaded;

@end

