//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSLayoutConstraint, NSProgressIndicator;

@interface CalUIToolbarCalendarStatusItem : NSView
{
    BOOL _isError;
    BOOL _isUpdating;
    NSButton *_errorBadgeButton;
    NSProgressIndicator *_updatingIndicator;
    NSLayoutConstraint *_widthConstraint;
}

+ (double)minDisplayWidth;
@property BOOL isUpdating; // @synthesize isUpdating=_isUpdating;
@property BOOL isError; // @synthesize isError=_isError;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain) NSProgressIndicator *updatingIndicator; // @synthesize updatingIndicator=_updatingIndicator;
@property(retain) NSButton *errorBadgeButton; // @synthesize errorBadgeButton=_errorBadgeButton;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setActiveSubview:(id)arg1;
- (void)updateSubviewForCurrentState;
- (void)showErrorBadge:(BOOL)arg1;
- (void)showUpdatingIndicator:(BOOL)arg1;
- (BOOL)isCompressible;
- (id)initWithMainController:(id)arg1;

@end

