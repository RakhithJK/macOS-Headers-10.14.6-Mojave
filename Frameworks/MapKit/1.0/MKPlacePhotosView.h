//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>
#import <MapKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIActivityIndicatorView, UIImageView, UILabel, UINavigationBar, UINavigationItem, UIScrollView, UIVisualEffectView;
@protocol MKPlacePhotosViewDelegate;

__attribute__((visibility("hidden")))
@interface MKPlacePhotosView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    NSArray *_photos;
    NSMutableArray *_photoViews;
    UIScrollView *_scrollView;
    UILabel *_pageInfoLabel;
    UIActivityIndicatorView *_activityIndicator;
    NSMutableArray *_singlePhotoArray;
    UIVisualEffectView *_topView;
    UINavigationBar *_navBar;
    UIView *_bottomView;
    UIVisualEffectView *_bottomEffectView;
    UIImageView *_gradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_licenseLabel;
    NSLayoutConstraint *_statusBarHeightConstraint;
    int _actualPage;
    UINavigationItem *_navItem;
    unsigned long long _textDisplayedForPage;
    NSArray *_fontConstraints;
    id <MKPlacePhotosViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MKPlacePhotosViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)indexForPhotoAtXOffset:(double)arg1 pageWidth:(double)arg2 numberOfPhotos:(unsigned long long)arg3;
- (double)xPositionForPhotoAtIndex:(unsigned long long)arg1 numberOfPhotos:(unsigned long long)arg2 pageWidth:(double)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dismiss;
- (void)willEnterForeground:(id)arg1;
- (void)memoryWarning:(id)arg1;
- (void)updateTextForPage:(unsigned long long)arg1;
- (void)updateDetails;
- (id)headerTitleForPage:(unsigned long long)arg1;
- (void)_backTapped;
- (void)setNavBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)toggleNavBar;
@property(nonatomic) unsigned long long currentPage;
- (void)hideToView:(id)arg1;
- (void)showPhotoAt:(unsigned long long)arg1;
- (void)photoAttributionTapped;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;
- (void)updateStatusBarConstraint;
- (void)contentSizeDidChange;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithPhotos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

