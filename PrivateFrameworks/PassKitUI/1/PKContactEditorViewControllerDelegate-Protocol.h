//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class CNContact, PKContactEditorViewController;

@protocol PKContactEditorViewControllerDelegate <NSObject>
- (void)contactEditorViewController:(PKContactEditorViewController *)arg1 didFinishEditingContact:(CNContact *)arg2;
- (void)contactEditorViewControllerDidCancel:(PKContactEditorViewController *)arg1;
@end

