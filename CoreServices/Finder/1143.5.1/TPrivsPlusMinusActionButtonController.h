//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TPropertySegmentedControlController.h"

#import "NSMenuDelegate-Protocol.h"

@class NSMenu, NSString, TPrivsTableViewMainController;

@interface TPrivsPlusMinusActionButtonController : TPropertySegmentedControlController <NSMenuDelegate>
{
    TPrivsTableViewMainController *_tableViewController;
    NSMenu *_actionMenu;
    struct TString _makeUserOwnerTemplate;
    NSString *_makeUserOwnerTitle;
    _Bool _volumeSupportsACLs;
    _Bool _makeUserOwnerShouldBeVisible;
    _Bool _makeUserOwnerShouldBeEnabled;
    _Bool _applyToEnclosedShouldBeVisible;
    _Bool _applyToEnclosedShouldBeEnabled;
    _Bool _shouldEnableMinusButton;
    struct TKeyValueBinder _makeUserOwnerTitleBinder;
    struct TKeyValueBinder _shouldEnableMinusButtonBinder;
}

@property(nonatomic) _Bool shouldEnableMinusButton; // @synthesize shouldEnableMinusButton=_shouldEnableMinusButton;
@property(nonatomic) _Bool applyToEnclosedShouldBeEnabled; // @synthesize applyToEnclosedShouldBeEnabled=_applyToEnclosedShouldBeEnabled;
@property(nonatomic) _Bool applyToEnclosedShouldBeVisible; // @synthesize applyToEnclosedShouldBeVisible=_applyToEnclosedShouldBeVisible;
@property(nonatomic) _Bool makeUserOwnerShouldBeEnabled; // @synthesize makeUserOwnerShouldBeEnabled=_makeUserOwnerShouldBeEnabled;
@property(nonatomic) _Bool makeUserOwnerShouldBeVisible; // @synthesize makeUserOwnerShouldBeVisible=_makeUserOwnerShouldBeVisible;
@property(nonatomic) _Bool volumeSupportsACLs; // @synthesize volumeSupportsACLs=_volumeSupportsACLs;
@property(retain) NSString *makeUserOwnerTitle; // @synthesize makeUserOwnerTitle=_makeUserOwnerTitle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
- (void)aboutToTearDown;
- (void)dealloc;
- (void)viewLoaded;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

