//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIViewControllerPreviewing_Private-Protocol.h>

@protocol UICoordinateSpace, UIViewControllerPreviewingDelegate;

@protocol UIViewControllerPreviewing_Internal <UIViewControllerPreviewing_Private>
@property(nonatomic) __weak id <UIViewControllerPreviewingDelegate> delegate;
- (void)unregister;

@optional
- (struct CGRect)preferredSourceViewRectInCoordinateSpace:(id <UICoordinateSpace>)arg1;
@end

