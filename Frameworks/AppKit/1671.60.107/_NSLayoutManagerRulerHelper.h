//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBox, NSControl, NSLayoutManager, NSPopUpButton, NSTabWell;

__attribute__((visibility("hidden")))
@interface _NSLayoutManagerRulerHelper : NSObject
{
    NSLayoutManager *_layoutManager;
    NSBox *_rulerAccView;
    NSControl *_rulerAccViewAlignmentButtons;
    NSPopUpButton *_rulerAccViewSpacing;
    NSTabWell *_rulerAccViewLeftTabWell;
    NSTabWell *_rulerAccViewRightTabWell;
    NSTabWell *_rulerAccViewCenterTabWell;
    NSTabWell *_rulerAccViewDecimalTabWell;
    NSPopUpButton *_rulerAccViewStyles;
    NSPopUpButton *_rulerAccViewLists;
    _Bool temporarySpacingChange;
}

- (double)defaultLineHeightForFont:(id)arg1;
- (void)_rulerAccViewStylesAction:(id)arg1;
- (void)_rulerAccViewSpacingAction:(id)arg1;
- (void)_rulerAccViewListsAction:(id)arg1;
- (void)_rulerAccViewAlignmentAction:(id)arg1;
- (void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2;
- (void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2 startingItemNumber:(long long)arg3 forceStartingItemNumber:(BOOL)arg4;
- (unsigned long long)_markerLevelForRange:(struct _NSRange)arg1;
- (void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2 startingItemNumber:(long long)arg3 inRange:(struct _NSRange)arg4 level:(unsigned long long)arg5;
- (void)_doUserRemoveMarkerFormatInRange:(struct _NSRange)arg1;
- (void)_doUserSetAttributes:(id)arg1 removeAttributes:(id)arg2;
- (void)_doUserParagraphStyleLineHeightMultiple:(double)arg1 min:(double)arg2 max:(double)arg3 lineSpacing:(double)arg4 paragraphSpacingBefore:(double)arg5 after:(double)arg6 isFinal:(BOOL)arg7;
- (id)_rulerAccView;
- (void)_rulerAccViewSetUpLists;
- (void)_rulerAccViewUpdateStyles:(id)arg1;
- (id)rulerAccessoryViewForTextView:(id)arg1 paragraphStyle:(id)arg2 ruler:(id)arg3 enabled:(BOOL)arg4;
- (id)rulerMarkersForTextView:(id)arg1 paragraphStyle:(id)arg2 ruler:(id)arg3;
@property NSPopUpButton *lists;
@property NSPopUpButton *styles;
@property NSTabWell *decimalTabWell;
@property NSTabWell *rightTabWell;
@property NSTabWell *centerTabWell;
@property NSTabWell *leftTabWell;
@property NSPopUpButton *spacings;
@property NSControl *alignments;
@property(retain) NSBox *rulerAccessoryView;
- (void)dealloc;
- (id)initWithLayoutManager:(id)arg1;

@end

