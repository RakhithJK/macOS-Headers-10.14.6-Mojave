//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSProgressIndicator, UXNavigationItem;

@interface UXNavigationBar : NSView
{
    NSArray *_items;
    UXNavigationItem *_defaultItem;
    UXNavigationItem *_topItem;
    int _style;
    NSView *_emptyRightView;
    NSView *_emptyInnerRightView;
    NSView *_emptyInnerLeftView;
    NSView *_emptyLeftView;
    NSView *_emptyCenterView;
    NSView *_backgroundView;
    NSProgressIndicator *_spinner;
    BOOL _didSetupObservers;
}

+ (id)keyPathsForValuesAffectingCurrentSpinnerEnabled;
+ (id)keyPathsForValuesAffectingCurrentTitleView;
+ (id)keyPathsForValuesAffectingCurrentInnerRightBarButtonView;
+ (id)keyPathsForValuesAffectingCurrentRightBarButtonView;
+ (id)keyPathsForValuesAffectingCurrentInnerLeftBarButtonView;
+ (id)keyPathsForValuesAffectingCurrentLeftBarButtonView;
+ (id)keyPathsForValuesAffectingTopItem;
@property(retain, nonatomic) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSView *emptyCenterView; // @synthesize emptyCenterView=_emptyCenterView;
@property(retain, nonatomic) NSView *emptyInnerRightView; // @synthesize emptyInnerRightView=_emptyInnerRightView;
@property(retain, nonatomic) NSView *emptyRightView; // @synthesize emptyRightView=_emptyRightView;
@property(retain, nonatomic) NSView *emptyInnerLeftView; // @synthesize emptyInnerLeftView=_emptyInnerLeftView;
@property(retain, nonatomic) NSView *emptyLeftView; // @synthesize emptyLeftView=_emptyLeftView;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UXNavigationItem *topItem; // @synthesize topItem=_topItem;
@property(retain, nonatomic) UXNavigationItem *defaultItem; // @synthesize defaultItem=_defaultItem;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_invalidateConstraints;
- (void)popToNavigationItem:(id)arg1 animated:(BOOL)arg2;
- (void)popNavigationItemAnimated:(BOOL)arg1;
- (void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2;
- (void)updateConstraints;
@property(readonly, nonatomic) BOOL currentSpinnerEnabled;
@property(readonly, retain, nonatomic) NSView *currentTitleView; // @dynamic currentTitleView;
@property(readonly, retain, nonatomic) NSView *currentInnerRightBarButtonView; // @dynamic currentInnerRightBarButtonView;
@property(readonly, retain, nonatomic) NSView *currentRightBarButtonView; // @dynamic currentRightBarButtonView;
@property(readonly, retain, nonatomic) NSView *currentInnerLeftBarButtonView; // @dynamic currentInnerLeftBarButtonView;
@property(readonly, retain, nonatomic) NSView *currentLeftBarButtonView; // @dynamic currentLeftBarButtonView;
- (void)dealloc;
- (void)setupObservers;

@end

