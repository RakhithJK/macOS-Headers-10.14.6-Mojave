//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TInfoWindowViewController.h"

@class NSLayoutConstraint, NSStackView, TPropertyAliasOriginalPathController, TPropertyAppNapIsDisabledController, TPropertyAppPrefersExternalGPUController, TPropertyCapacityController, TPropertyCopyrightController, TPropertyCreationDateController, TPropertyDiskImagePathController, TPropertyFontNameController, TPropertyFormatController, TPropertyFreeSpaceController, TPropertyInfoWindowSizeController, TPropertyKindController, TPropertyLockedController, TPropertyLongVersionController, TPropertyMemoryController, TPropertyModificationDateController, TPropertyOpenInLowRezController, TPropertyProcessorController, TPropertySavedSearchQueryController, TPropertyServerURLController, TPropertySharedFolderController, TPropertyStartupDiskController, TPropertyStationeryPadController, TPropertyUsedController, TPropertyWherePathController, TSelectNewOriginalForAliasController, TSpacerViewController;

@interface TInfoWindowGeneralViewController : TInfoWindowViewController
{
    NSStackView *_stackView;
    TPropertyKindController *_kindController;
    TPropertyInfoWindowSizeController *_sizeController;
    TPropertyWherePathController *_wherePathController;
    TPropertyServerURLController *_serverURLController;
    TPropertyDiskImagePathController *_diskImagePathController;
    TPropertyCreationDateController *_createDateController;
    TPropertyModificationDateController *_modDateController;
    TPropertyLongVersionController *_versionController;
    TPropertySavedSearchQueryController *_queryController;
    TPropertyFormatController *_formatController;
    TPropertyCapacityController *_capacityController;
    TPropertyFreeSpaceController *_freeSpaceController;
    TPropertyUsedController *_usedController;
    TPropertyProcessorController *_processorController;
    TPropertyMemoryController *_memoryController;
    TPropertyStartupDiskController *_startupDiskController;
    TSpacerViewController *_spacerViewController;
    TPropertyFontNameController *_fontNameController;
    TPropertyCopyrightController *_copyrightController;
    TPropertyAliasOriginalPathController *_aliasOriginalPathController;
    TSelectNewOriginalForAliasController *_newOriginalForAliasController;
    TSpacerViewController *_checkBoxSpacerViewController;
    TPropertyOpenInLowRezController *_openInLowRezController;
    TPropertyAppPrefersExternalGPUController *_appPrefersExternalGPUController;
    TPropertyAppNapIsDisabledController *_appNapIsDisabledController;
    TPropertySharedFolderController *_sharedFolderController;
    TPropertyStationeryPadController *_stationeryPadController;
    TPropertyLockedController *_lockedController;
    NSLayoutConstraint *_firstTitleFieldWidthConstraint;
    struct vector<TKeyValueBinder, std::__1::allocator<TKeyValueBinder>> _checkboxOffsetBinders;
    double _checkboxOffset;
}

+ (id)controller;
@property double checkboxOffset; // @synthesize checkboxOffset=_checkboxOffset;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)scriptingID;
- (void)adjustTitleWidths;
- (void)bulkNodesChanged:(const map_253f12d2 *)arg1;
- (unsigned int)notificationOptionsForNodes:(const struct TFENodeVector *)arg1;
- (void)refresh;
- (void)loadValueControllers;
- (id)expandedPrefKey;
- (_Bool)expandedDefaultValue;
- (void)aboutToTearDown;

@end
