//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSAccessibilityStaticText-Protocol.h>

@class AlertDialogView, NSString;

__attribute__((visibility("hidden")))
@interface AlertDialogViewOriginMessageAccessibilityHelper : NSObject <NSAccessibilityStaticText>
{
    AlertDialogView *_parentView;
}

- (void).cxx_destruct;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityParent;
- (id)accessibilityValue;
- (id)initWithAlertDialogView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
