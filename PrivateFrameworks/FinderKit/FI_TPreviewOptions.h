//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderKit/TPreviewOptionsGroupSettingsDelegete-Protocol.h>

@class NSArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface FI_TPreviewOptions : NSObject <TPreviewOptionsGroupSettingsDelegete>
{
    struct TString _baseUTI;
    struct TNSRef<NSSet<NSString *>, void> _userSelectedKeys;
    struct TNSRef<NSArray<NSString *>, void> _spotlightQueryAttributes;
    struct TNSRef<NSArray<NSString *>, void> _allSpotlightQueryAttributes;
    struct TNSRef<NSArray<NSString *>, void> _orderedDisplayAttributes;
    struct TNSRef<NSArray<NSString *>, void> _allOrderedDisplayAttributes;
    struct TNSRef<NSArray<FI_TPreviewOptionsGroup *>, void> _groupDefinitions;
    struct TNSRef<NSArray<FI_TPreviewOptionsGroupSettings *>, void> _settingsGroups;
    struct TNSRef<FI_TPreviewOptionsDynamicGroupSettings, void> _dynamicGroupSettings;
    _Bool _showQuickActions;
    _Bool _quickActionsSupported;
    function_4af4fa10 _saveOptionsCallback;
    _Bool _suppressSaving;
    _Bool _editing;
}

+ (id)keyPathsForValuesAffectingOrderedDisplayAttributes;
+ (id)keyPathsForValuesAffectingSpotlightQueryAttributes;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool showQuickActions; // @synthesize showQuickActions=_showQuickActions;
@property(readonly, nonatomic) _Bool quickActionsSupported; // @synthesize quickActionsSupported=_quickActionsSupported;
@property(nonatomic) _Bool suppressSaving; // @synthesize suppressSaving=_suppressSaving;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateDynamicGroupSettingsWithItemMetadata:(shared_ptr_99c3fa9b)arg1;
- (void)groupDidChange:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *groupedSettings;
@property(readonly, nonatomic) _Bool allKeysAreSelected; // @dynamic allKeysAreSelected;
- (id)allKeys;
@property(readonly, retain, nonatomic) NSArray *allOrderedDisplayAttributes; // @dynamic allOrderedDisplayAttributes;
@property(readonly, retain, nonatomic) NSArray *orderedDisplayAttributes; // @dynamic orderedDisplayAttributes;
@property(readonly, retain, nonatomic) NSArray *allSpotlightQueryAttributes; // @dynamic allSpotlightQueryAttributes;
@property(readonly, retain, nonatomic) NSArray *spotlightQueryAttributes; // @dynamic spotlightQueryAttributes;
- (id)queryAttributesForSelected:(_Bool)arg1;
@property(readonly, retain, nonatomic) NSSet *userSelectedKeys; // @dynamic userSelectedKeys;
@property(readonly, retain, nonatomic) NSString *baseUTI; // @dynamic baseUTI;
- (void)setUserSelectedKeys:(id)arg1;
- (void)saveOptions;
- (void)setSaveOptionsCallback:(function_4af4fa10)arg1;
- (id)optionsToSave;
- (_Bool)needToSaveGroups;
- (void)loadDefaultOptionsFromDictionary:(id)arg1;
- (void)loadDefaultOptions;
- (id)initWithBaseUTIString:(const struct TString *)arg1 groups:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

