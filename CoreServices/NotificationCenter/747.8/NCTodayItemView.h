//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NCTodayItemViewController;

@interface NCTodayItemView : NSView
{
    BOOL _isFlipped;
    NCTodayItemViewController *_accessibilityDelegate;
}

@property(nonatomic) __weak NCTodayItemViewController *accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property BOOL isFlipped; // @synthesize isFlipped=_isFlipped;
- (void).cxx_destruct;
- (struct CGRect)_accessibilityWindowFrame;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (id)accessibilityHelp;
- (id)accessibilityRoleDescription;
- (id)accessibilitySubrole;
- (BOOL)isAccessibilityElement;

@end

