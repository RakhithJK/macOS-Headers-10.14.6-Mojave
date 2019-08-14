//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIFocusSystem, UIFocusUpdateContext;
@protocol UIFocusItemContainer, _UIFocusRegionContainer;

@protocol _UIFocusSystemDelegate <NSObject>

@optional
- (id <UIFocusItemContainer>)_focusItemContainerForFocusSystem:(UIFocusSystem *)arg1;
- (id <_UIFocusRegionContainer>)_focusMapContainerForFocusSystem:(UIFocusSystem *)arg1;
- (void)_focusSystem:(UIFocusSystem *)arg1 didFinishUpdatingFocusInContext:(UIFocusUpdateContext *)arg2;
- (BOOL)_focusSystem:(UIFocusSystem *)arg1 shouldRestoreFocusInContext:(UIFocusUpdateContext *)arg2;
- (BOOL)_focusSystem:(UIFocusSystem *)arg1 prefersDeferralForFocusUpdateInContext:(UIFocusUpdateContext *)arg2;
- (NSArray *)_preferredFocusEnvironmentsForFocusSystem:(UIFocusSystem *)arg1;
@end

