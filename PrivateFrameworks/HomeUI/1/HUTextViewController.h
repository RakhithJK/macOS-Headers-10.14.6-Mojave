//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class HUActivityLoadingView, NAFuture, NSAttributedString, NSString, UIBarButtonItem, UITextView, UIView;

@interface HUTextViewController : UIViewController <HUPreloadableViewController>
{
    BOOL _showsShareButton;
    BOOL _showProgressIndicatorView;
    NSAttributedString *_textContent;
    UITextView *_textView;
    UIView *_curtainView;
    NSString *_titleText;
    HUActivityLoadingView *_loadingView;
    UIBarButtonItem *_shareButton;
    NAFuture *_loadingFuture;
}

@property(retain, nonatomic) NAFuture *loadingFuture; // @synthesize loadingFuture=_loadingFuture;
@property(readonly, nonatomic) UIBarButtonItem *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) BOOL showProgressIndicatorView; // @synthesize showProgressIndicatorView=_showProgressIndicatorView;
@property(readonly, nonatomic) HUActivityLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) UIView *curtainView; // @synthesize curtainView=_curtainView;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) BOOL showsShareButton; // @synthesize showsShareButton=_showsShareButton;
@property(copy, nonatomic) NSAttributedString *textContent; // @synthesize textContent=_textContent;
- (void).cxx_destruct;
- (void)_fulfillProgressIndicatorState:(BOOL)arg1;
- (void)_shareLog:(id)arg1;
- (id)_textContentWithDefaultAttributes;
- (void)loadTextFromFuture:(id)arg1 textTitle:(id)arg2;
- (void)setShowProgressIndicatorView:(BOOL)arg1 animated:(BOOL)arg2;
- (id)hu_preloadContent;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

