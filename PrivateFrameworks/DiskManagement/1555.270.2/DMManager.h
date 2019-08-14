//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DMManager : NSObject
{
    id _instPriv;
}

+ (id)sharedManagerForThread;
+ (id)sharedManager;
+ (BOOL)systemResourcesSufficient;
+ (void)initialize;
- (void)dealloc;
- (void)done;
- (void)stopDiskManagementLog;
- (int)setUserID:(id)arg1 groupID:(id)arg2;
- (void)setLanguage:(id)arg1;
- (const struct AuthorizationOpaqueRef *)authorization;
- (void)setAuthorization:(const struct AuthorizationOpaqueRef *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (struct __DASession *)defaultDASession;
- (void)setDefaultDASession:(struct __DASession *)arg1;
- (id)init;
- (double)timeoutHint:(id)arg1;
- (struct __DASession *)obtainedClientDASession:(struct __DADisk *)arg1;
- (void)getSessionUUID:(char *)arg1 f2tPort:(unsigned int *)arg2 t2fPort:(unsigned int *)arg3 clientDefaultDASession:(struct __DASession **)arg4;
- (void)stopInstanceAsNeeded;
- (BOOL)clientConforms:(id)arg1 error:(int *)arg2;
- (BOOL)checkClientDelegate;
- (void)setClientDelegate:(id)arg1;
- (BOOL)isAPFSVolumeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isAPFSPhysicalStoreDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isAPFSContainerSchemeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isAPFSContainerReferenceDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)coreStorageStatusSummaryForDisk:(struct __DADisk *)arg1 orForCSUUID:(id)arg2 error:(int *)arg3;
- (BOOL)isDisallowedCoreStorageOperationsForLogicalVolumeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)needsRebootToBeginCoreStorageConversion:(struct __DADisk *)arg1 checkRoot:(BOOL)arg2 error:(int *)arg3;
- (BOOL)isUnrecognizedCoreStoragePhysicalVolumeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isCoreStoragePhysicalVolumeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)optimizationProgressForCoreStorageDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)optimizationProgressForLogicalVolumeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)optimizationProgressForLogicalVolume:(id)arg1 error:(int *)arg2;
- (id)conversionProgressForCoreStorageDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)conversionProgressForLogicalVolumeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)conversionProgressForLogicalVolume:(id)arg1 error:(int *)arg2;
- (id)conversionStateForLogicalVolumeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isCoreStorageCompositeLogicalVolumeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isCoreStorageEncryptedLogicalVolumeDisk:(struct __DADisk *)arg1 locked:(char *)arg2 type:(id *)arg3 error:(int *)arg4;
- (BOOL)isCoreStorageLogicalVolumeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)DMAppleRAIDMemberRebuildProgress:(id)arg1 error:(int *)arg2;
- (id)DMAppleRAIDParentUUIDForUUID:(id)arg1 error:(int *)arg2;
- (BOOL)isAppleRAIDSpareDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isAppleRAIDMemberDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isAppleRAIDSetDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isAppleRAIDDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isAppleRAIDUUID:(id)arg1 error:(int *)arg2;
- (struct __DADisk *)DMAppleRAIDUUIDLookup:(id)arg1;
- (id)DMAppleRAIDUUIDForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)physicalDisksForDisk:(struct __DADisk *)arg1 storageSystemName:(id *)arg2 error:(int *)arg3;
- (BOOL)isMountableVolume:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)ioContentOfDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)ioContentToHuman:(id)arg1 error:(int *)arg2;
- (id)ioContentToHuman:(id)arg1 context:(id)arg2 error:(int *)arg3;
- (BOOL)canRepairPermissions:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)permissionsEnabledForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (struct __DADisk *)copyRecoveryDiskForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (struct __DADisk *)copyBooterDiskForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isRecoveryDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isBooterDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isRecoveryBooterPartitionDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isBooterPartitionDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isLiveResizablePartitionForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isOpenDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isLeafDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isJournaledDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isVirtualWholeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isRemovableMediaOrExternalDeviceDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isEjectableDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isRemovableDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isInternalDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isNetworkDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isUserDataVolume:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isSystemImage:(struct __DADisk *)arg1 error:(int *)arg2;
- (int)partitionMapSchemeForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)wholeDiskSupportsLowLevelFormat:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)wholeDiskHasOS9Drivers:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)smartStatusForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)busSpecificKeysForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isSolidStateDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)protocolForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isXsanFilesystemDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isXsanComponentDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isIPodDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)mediaTypeForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isAppleDiskImage:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)bayNameForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isAESHardwareDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isErasableOpticalMedia:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)opticalMediaTypeForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)opticalDeviceTypeForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isDVD:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isCD:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isOpticalDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isFileCaseSensitiveDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isFileCasePreservingDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isVolumeNameCaseSensitiveDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isVolumeNameCasePreservingDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)filesystemForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isWritableVolume:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isWritableMedia:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isWritableDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)blockSizeForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)totalSizeForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)ioKitSizeForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)volumeAllocationBlockSizeForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)volumeTotalSizeForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)volumeFreeSpaceForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (struct __DADisk *)copyDiskForVolumeName:(id)arg1 error:(int *)arg2;
- (id)volumeNameForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)mountPointForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isMountedVolume:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isOnSameWholeDiskAsRoot:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isRootVolume:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)deviceTreePathForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)rawDeviceNodeForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)deviceNodeForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)partitionIdentifierForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)wholeDiskIdentifierForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)diskIdentifierForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)ioKitNameForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)mediaNameForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)deviceNameForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)diskUUIDForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)volumeUUIDForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)uuidForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isPartitionDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isChildDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isWholeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)descriptionForDisk:(struct __DADisk *)arg1;
- (struct __DADisk *)copyDiskForPartitionIdentifier:(id)arg1 forWholeDisk:(struct __DADisk *)arg2 error:(int *)arg3;
- (struct __DADisk *)copyDiskForVolumeUUID:(id)arg1 error:(int *)arg2;
- (struct __DADisk *)copyDiskForDiskUUID:(id)arg1 error:(int *)arg2;
- (BOOL)mapLayoutMatching:(struct __DADisk *)arg1 matchScheme:(int)arg2 matchPartitions:(id)arg3 error:(int *)arg4;
- (BOOL)isLastDiskInMap:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)isFirstDiskInMap:(struct __DADisk *)arg1 error:(int *)arg2;
- (struct __DADisk *)copyPreviousDiskInMapForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (struct __DADisk *)copyNextDiskInMapForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (struct __DADisk *)copyLastDiskInMapForWholeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (struct __DADisk *)copyFirstDiskInMapForWholeDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (struct __DADisk *)copyWholeDiskForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (struct __DADisk *)wholeDiskForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)partitionChildrenForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)directChildrenForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)childrenForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (id)topLevelDisks;
- (id)disks;
- (struct __DADisk *)rootDisk:(int *)arg1;
- (struct __DADisk *)copyRootDisk:(int *)arg1;
- (struct __DADisk *)copyDiskForMountPoint:(id)arg1 error:(int *)arg2;
- (struct __DADisk *)diskForPath:(id)arg1 error:(int *)arg2;
- (struct __DADisk *)copyDiskForPath:(id)arg1 error:(int *)arg2;
- (struct __DADisk *)copyDiskForArgumentName:(id)arg1 timeout:(double)arg2 complete:(char *)arg3;
- (int)renameDisk:(struct __DADisk *)arg1 toName:(id)arg2;
- (int)renameDisk:(struct __DADisk *)arg1 toName:(id)arg2 errorDict:(id *)arg3;
- (int)unmountEFISystemPartition:(struct __DADisk *)arg1 options:(id)arg2;
- (int)mountEFISystemPartition:(struct __DADisk *)arg1 options:(id)arg2 espDisk:(struct __DADisk **)arg3 espMountPoint:(id *)arg4;
- (int)ejectDiskOnly:(struct __DADisk *)arg1 errorDict:(id *)arg2;
- (BOOL)ejectDisk:(struct __DADisk *)arg1;
- (BOOL)ejectDisk:(struct __DADisk *)arg1 errorDict:(id *)arg2;
- (int)unmountDisksDeepForPartitionMap:(struct __DADisk *)arg1 force:(BOOL)arg2 timeout:(double)arg3;
- (BOOL)unmountDisk:(struct __DADisk *)arg1 entireDisk:(BOOL)arg2 force:(BOOL)arg3;
- (BOOL)unmountDisk:(struct __DADisk *)arg1 entireDisk:(BOOL)arg2 force:(BOOL)arg3 errorDict:(id *)arg4;
- (BOOL)unmountVolumePath:(id)arg1 force:(BOOL)arg2 errorDict:(id *)arg3;
- (BOOL)mountDisk:(struct __DADisk *)arg1 entireDisk:(BOOL)arg2 atPath:(id)arg3 readOnly:(BOOL)arg4 otherArguments:(id)arg5;
- (BOOL)mountDisk:(struct __DADisk *)arg1 entireDisk:(BOOL)arg2 atPath:(id)arg3 readOnly:(BOOL)arg4 otherArguments:(id)arg5 errorDict:(id *)arg6;
- (BOOL)doMountDisk:(struct __DADisk *)arg1 atPath:(id)arg2 readOnly:(BOOL)arg3 otherArguments:(id)arg4 errorDict:(id *)arg5;
- (int)makeVolumeCaseSensitive:(struct __DADisk *)arg1;
- (int)volumeInfoForUnmountedDisk:(struct __DADisk *)arg1 info:(id *)arg2;
- (int)modifyOwnershipForDisk:(struct __DADisk *)arg1 enableOwnership:(BOOL)arg2;
- (int)modifyJournalOnDisk:(struct __DADisk *)arg1 enableJournaling:(BOOL)arg2 force:(BOOL)arg3;
- (int)moveJournalInternal:(struct __DADisk *)arg1;
- (int)upgradeDisk:(struct __DADisk *)arg1 enablePermissions:(BOOL)arg2;
- (int)findBooterDiskContainingBaseSystemForDisk:(struct __DADisk *)arg1;
- (int)updateBootFirmwareLabelsForAllInternalOrGivenMacOSDisks:(id)arg1 options:(id)arg2;
- (int)makeLegacyBootable:(struct __DADisk *)arg1 partitionDataRuns:(id)arg2 MBRHeaderDataRun:(id)arg3 setActive:(unsigned char)arg4 updateBootIni:(BOOL)arg5 options:(id)arg6;
- (int)recoveryPartitionInfoForVolume:(struct __DADisk *)arg1 what:(id)arg2 info:(id *)arg3;
- (int)replaceDiagnosticsForVolume:(struct __DADisk *)arg1 diagnosticsDiskImageFile:(id)arg2 diagnosticsChunkListFile:(id)arg3 verifyImage:(BOOL)arg4 allowGrowth:(BOOL)arg5 diagnosticsMachineBlacklistInhibit:(BOOL)arg6;
- (int)ensureRecoveryPartitionForVolume:(struct __DADisk *)arg1 macOSXDiskImageFile:(id)arg2 macOSXDiskImageChunkListFile:(id)arg3 diagnosticsDiskImageFile:(id)arg4 diagnosticsDiskImageChunkListFile:(id)arg5 verifyImage:(BOOL)arg6 repairDonor:(BOOL)arg7 diagnosticsMachineBlacklistInhibit:(BOOL)arg8;
- (int)ensureRecoveryPartitionForVolume:(struct __DADisk *)arg1 macOSXDiskImageFile:(id)arg2 macOSXDiskImageChunkListFile:(id)arg3 diagnosticsDiskImageFile:(id)arg4 diagnosticsDiskImageChunkListFile:(id)arg5 verifyImage:(BOOL)arg6 repairDonor:(BOOL)arg7 bless:(BOOL)arg8;
- (int)ensureRecoveryPartitionForVolume:(struct __DADisk *)arg1 macOSXDiskImageFile:(id)arg2 macOSXDiskImageChunkListFile:(id)arg3 verifyImage:(BOOL)arg4 repairDonor:(BOOL)arg5 bless:(BOOL)arg6;
- (int)ensureRecoveryPartitionForVolume:(struct __DADisk *)arg1 macOSXDiskImageFile:(id)arg2 macOSXDiskImageChunkListFile:(id)arg3 verifyImage:(BOOL)arg4 repairDonor:(BOOL)arg5;
- (int)ensureRecoveryPartitionForVolume:(struct __DADisk *)arg1 macOSXDiskImageFile:(id)arg2 verifyImage:(BOOL)arg3 repairDonor:(BOOL)arg4;
- (int)makeBootable:(struct __DADisk *)arg1 filesystem:(id)arg2 newDisk:(struct __DADisk **)arg3;
- (int)checkAbilityToMakeBootable:(struct __DADisk *)arg1 onAnyMachine:(BOOL)arg2 atAll:(char *)arg3 yesButDestructively:(char *)arg4;
- (int)checkMacOSXBootability:(struct __DADisk *)arg1 isBootable:(char *)arg2;
- (int)checkBootabilityOnThisMachine:(struct __DADisk *)arg1 isBootable:(char *)arg2;
- (int)checkWindowsUEFIBootabilityForOpticalWholeDisk:(struct __DADisk *)arg1 isWindowsUEFIBootable:(char *)arg2 os:(id *)arg3;
- (int)checkWindowsUEFIBootabilityForNonOpticalPartition:(struct __DADisk *)arg1 isWindowsUEFIBootable:(char *)arg2 os:(id *)arg3;
- (int)checkLegacyBootabilityForNonOpticalPartition:(struct __DADisk *)arg1 isLegacyBootable:(char *)arg2 os:(id *)arg3;
- (int)checkLegacyBootabilityForNonOpticalWholeDisk:(struct __DADisk *)arg1 isLegacyBootable:(char *)arg2 os:(id *)arg3;
- (int)checkLegacyBootabilityForOpticalWholeDisk:(struct __DADisk *)arg1 isLegacyBootable:(char *)arg2 os:(id *)arg3;
- (int)checkOpticalDiscBootability:(struct __DADisk *)arg1 isBootable:(char *)arg2;
- (int)getDiskForBootPreference:(struct __DADisk **)arg1;
- (int)copyDiskForBootPreference:(struct __DADisk **)arg1;
- (int)setWindowsUEFIDiskForNextOnlyBootPreference:(struct __DADisk *)arg1 withDriveHint:(struct __DADisk *)arg2;
- (int)setWindowsInstallerUEFIDiskForNextOnlyBootPreference:(struct __DADisk *)arg1 withDriveHint:(struct __DADisk *)arg2;
- (int)setWindowsUEFIDiskForBootPreference:(struct __DADisk *)arg1 withDriveHint:(struct __DADisk *)arg2;
- (int)setLegacyDiskForNextOnlyBootPreference:(struct __DADisk *)arg1 withDriveHint:(struct __DADisk *)arg2;
- (int)setLegacyDiskForBootPreference:(struct __DADisk *)arg1 withDriveHint:(struct __DADisk *)arg2;
- (int)setDiskForBootPreference:(struct __DADisk *)arg1 atFolderLocation:(id)arg2 personalize:(BOOL)arg3;
- (int)setDiskForBootPreference:(struct __DADisk *)arg1 atFolderLocation:(id)arg2 isOS9:(BOOL)arg3;
- (int)getNetBootPreference:(unsigned int *)arg1 withServer:(id *)arg2 forInterface:(id *)arg3;
- (int)setNextOnlyNetBootPreference:(unsigned int)arg1 withServer:(id)arg2 forInterface:(id)arg3;
- (int)setNetBootPreference:(unsigned int)arg1 withServer:(id)arg2 forInterface:(id)arg3;
- (int)setNVRAM:(id)arg1 forKey:(id)arg2;
- (int)checkUEFIWindowsBootSupport:(char *)arg1;
- (int)checkLegacyBootSupport:(char *)arg1;
- (unsigned int)supportedNetBootProtocols;
- (int)preBootEnvironment;
- (int)checkBootabilityOnThisMachine_actualsimplepartition_:(struct __DADisk *)arg1 isBootable:(char *)arg2;
- (int)checkAbilityToMakeBootable_actualsimplepartition_:(struct __DADisk *)arg1 onAnyMachine:(BOOL)arg2 atAll:(char *)arg3 yesButDestructively:(char *)arg4;
- (int)cryptoStateForDisk:(struct __DADisk *)arg1 options:(id)arg2 details:(id *)arg3;
- (int)decryptDisk:(struct __DADisk *)arg1 options:(id)arg2 details:(id *)arg3;
- (int)encryptDisk:(struct __DADisk *)arg1 user:(id)arg2 passdata:(id)arg3 hint:(id)arg4 options:(id)arg5 details:(id *)arg6;
- (int)isDiskSuitableForDecryption:(struct __DADisk *)arg1 options:(id)arg2 suitable:(char *)arg3 details:(id *)arg4;
- (int)isDiskSuitableForEncryption:(struct __DADisk *)arg1 options:(id)arg2 suitable:(char *)arg3 details:(id *)arg4;
- (int)isSuitableTransformForLOG:(struct DMUDSPrivRec *)arg1 transform:(id)arg2 suitable:(char *)arg3 plan:(id *)arg4 details:(id)arg5;
- (void)cryptoStatusForLOG:(struct DMUDSPrivRec *)arg1 inSS:(id)arg2 yesInfoFileVaulted:(char *)arg3 yesInfoFullyEncrypted:(char *)arg4 yesInfoBusy:(char *)arg5 yesInfoDirection:(char *)arg6 yesInfoLocked:(char *)arg7 nonNilInfoProgress:(id *)arg8;
- (int)cryptoMigrationPlanForLOG:(struct DMUDSPrivRec *)arg1 transform:(id)arg2 currentOldSS:(id *)arg3 supported:(char *)arg4 planScript:(id *)arg5 plannedNewSS:(id *)arg6 plannedChangeSS:(char *)arg7 plannedChangeLOG:(char *)arg8;
- (int)partitionMapTypeForDisk:(id)arg1;
- (id)directChildrenOfDisk:(id)arg1;
- (id)rootDisk;
- (id)diskWithIdentifier:(id)arg1;
- (void)waitForAppearanceOfDiskNodes;

@end
