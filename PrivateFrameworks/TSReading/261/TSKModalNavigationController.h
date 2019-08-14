//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class UIView;

@interface TSKModalNavigationController : UINavigationController
{
    UIView *mTopSeparator;
    BOOL mShowTopSeparator;
    BOOL mIsFullscreenViewController;
}

@property(nonatomic) BOOL isFullscreenViewController; // @synthesize isFullscreenViewController=mIsFullscreenViewController;
@property(nonatomic) BOOL showTopSeparator; // @synthesize showTopSeparator=mShowTopSeparator;
- (long long)positionForBar:(id)arg1;
- (void)viewDidLoad;
- (void)layoutViews;
- (void)p_statusBarWillChange:(id)arg1;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;

@end
