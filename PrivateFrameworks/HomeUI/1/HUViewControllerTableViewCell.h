//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUViewControllerCell-Protocol.h>

@class NSString, UIViewController;

@interface HUViewControllerTableViewCell : UITableViewCell <HUViewControllerCell>
{
    UIViewController *_viewController;
    UIViewController *_parentViewController;
}

@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)_removeFromParentViewControllerAndClearProperty:(BOOL)arg1;
- (void)removeFromParentViewController;
- (void)addToParentViewController:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

