//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIAccessibilityCustomAction.h>

@class UIView;

@interface UIAccessibilityAddToDragSessionCustomAction : UIAccessibilityCustomAction
{
    struct CGPoint _pt;
    UIView *_view;
}

- (void).cxx_destruct;
- (id)_accessibilityCustomActionIdentifier;
- (BOOL)_accessibilityInvokeAddToSession;
- (id)initWithPoint:(struct CGPoint)arg1 inSourceView:(id)arg2;

@end

