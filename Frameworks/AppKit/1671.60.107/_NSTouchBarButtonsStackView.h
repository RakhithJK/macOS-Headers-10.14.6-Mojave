//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSStackView.h>

#import <AppKit/_NSTouchBarItemLayoutWrapper-Protocol.h>

@class NSButtonGroupTouchBarItem, NSLayoutConstraint, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _NSTouchBarButtonsStackView : NSStackView <_NSTouchBarItemLayoutWrapper>
{
    NSButtonGroupTouchBarItem *_groupTouchBarItem;
    NSLayoutConstraint *_desiredWidthConstraint;
    BOOL _usingShortestTitle;
    NSMutableArray *_preferredWidthConstraints;
    NSMutableArray *_equalWidthConstraints;
    NSMutableArray *_adjustableButtons;
    NSMutableArray *_popoverItems;
    double _maxWidth;
}

+ (id)makePopoverItemWithIdentifier:(id)arg1 popoverTouchBar:(id)arg2 title:(id)arg3 image:(id)arg4 preferredWidth:(double)arg5;
+ (id)makeAlertButtonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)makeButtonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4 preferredWidth:(double)arg5;
+ (id)_buttonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4 preferredWidth:(double)arg5 isAlertButton:(BOOL)arg6;
@property(retain) NSMutableArray *popoverItems; // @synthesize popoverItems=_popoverItems;
@property(retain) NSMutableArray *adjustableButtons; // @synthesize adjustableButtons=_adjustableButtons;
@property(retain) NSLayoutConstraint *desiredWidthConstraint; // @synthesize desiredWidthConstraint=_desiredWidthConstraint;
@property(retain) NSMutableArray *equalWidthConstraints; // @synthesize equalWidthConstraints=_equalWidthConstraints;
@property(retain) NSMutableArray *preferredWidthConstraints; // @synthesize preferredWidthConstraints=_preferredWidthConstraints;
@property __weak NSButtonGroupTouchBarItem *groupTouchBarItem; // @synthesize groupTouchBarItem=_groupTouchBarItem;
- (void).cxx_destruct;
- (unsigned long long)_compressedImagePosition;
- (void)_setButtonsWithShortTitlesCompressedImage;
- (void)_setButtonsWithShortTitles;
- (void)_setButtonsWithFullTitles;
- (BOOL)_buttonsFitShortTitles;
- (BOOL)_buttonsFitFullTitles;
@property(readonly) BOOL isSpace;
@property(readonly) struct CGSize contentClippingSize;
@property(readonly) struct CGSize maxSize;
@property(readonly) struct CGSize minSize;
- (void)insertPopover:(id)arg1 atIndex:(long long)arg2;
- (void)insertView:(id)arg1 atIndex:(long long)arg2;
- (void)resetButtons;
- (void)updateButtons;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetLayout;
- (void)_removeConstraintsForView:(id)arg1 fromConstraints:(id)arg2;
- (void)_removeConstraintsForView:(id)arg1;
- (void)_removeSubview:(id)arg1;
- (void)layout;
- (void)dealloc;
- (id)initWithBarItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long itemPosition;
@property(readonly) struct CGSize preferredSize;
@property(readonly) double preferredTrailingPosition;
@property(readonly) double preferredZOrder;
@property(readonly) long long priorityIndex;
@property(readonly) Class superclass;

@end

