//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

#import <CharacterPicker/CPKNavigationSender-Protocol.h>

@class NSString;
@protocol CPKNavigationDelegate;

@interface CPKSearchField : NSSearchField <CPKNavigationSender>
{
    BOOL _hasActiveNavigationTarget;
    BOOL _hasKeyFocus;
    id <CPKNavigationDelegate> _navigationDelegate;
}

+ (Class)cellClass;
@property BOOL hasKeyFocus; // @synthesize hasKeyFocus=_hasKeyFocus;
@property(readonly, nonatomic) id <CPKNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) BOOL hasActiveNavigationTarget; // @synthesize hasActiveNavigationTarget=_hasActiveNavigationTarget;
- (void)_changeHavingKeyFocus:(BOOL)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setStringValue:(id)arg1;
- (void)setHasActiveNavigationTarget:(BOOL)arg1;
- (void)setNavigationDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

