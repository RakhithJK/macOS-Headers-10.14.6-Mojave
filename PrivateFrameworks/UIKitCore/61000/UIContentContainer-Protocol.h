//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UITraitCollection;
@protocol UIContentContainer, UIViewControllerTransitionCoordinator;

@protocol UIContentContainer <NSObject>
@property(readonly, nonatomic) struct CGSize preferredContentSize;
- (void)willTransitionToTraitCollection:(UITraitCollection *)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (struct CGSize)sizeForChildContentContainer:(id <UIContentContainer>)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1;
@end

