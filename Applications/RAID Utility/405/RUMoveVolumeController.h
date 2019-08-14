//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RURaidManagementWindowController.h"

@class CRDriveGroup, CRVolume, NSArrayController, NSMutableSet, RURegistryEntryMatrix;

@interface RUMoveVolumeController : RURaidManagementWindowController
{
    CRVolume *_volume;
    NSMutableSet *_additionalGroups;
    CRDriveGroup *_selectedGroup;
    RURegistryEntryMatrix *moveVolumeMatrix;
    NSArrayController *groupsController;
}

+ (id)keyPathsForValuesAffectingIsMovePossible;
+ (id)keyPathsForValuesAffectingAdditionalGroups;
- (id)infoString;
- (void)windowDidLoad;
- (BOOL)isBootedFromSelectedVolume;
- (BOOL)hideHelp;
- (BOOL)isMovePossible;
- (id)selectedGroup;
- (id)additionalDrives;
- (void)okButtonClick:(id)arg1;
- (void)setupOperations;
- (void)helpButtonClick:(id)arg1;
- (id)volume;
- (void)setVolume:(id)arg1;
- (void)dealloc;
- (void)setDevice:(id)arg1;
- (id)init;

@end

