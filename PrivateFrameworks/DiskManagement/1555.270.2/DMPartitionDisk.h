//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DMPartitionDisk : NSObject
{
    id _instPriv;
}

- (int)createExternalJournalOnDisk:(struct __DADisk *)arg1 forDisk:(struct __DADisk *)arg2;
- (int)changeFilesystemSizeOnDisk:(struct __DADisk *)arg1 toSize:(id)arg2 fitPartition:(BOOL)arg3;
- (int)getFreespaceFollowingPartition:(struct __DADisk *)arg1 skipBooter:(BOOL)arg2 gapSize:(id *)arg3 reserveSize:(id *)arg4 usableSize:(id *)arg5;
- (id)getPartitionStartLocationForDisk:(struct __DADisk *)arg1;
- (int)getPartitionMapSizeForWholeDisk:(struct __DADisk *)arg1 totalSize:(id *)arg2 usableSize:(id *)arg3 overheadSize:(id *)arg4;
- (int)touchPartitionMapForWholeDisk:(struct __DADisk *)arg1;
- (int)adjustMapToFitGrownWholeDisk:(struct __DADisk *)arg1;
- (int)removePartition:(struct __DADisk *)arg1 wipe:(BOOL)arg2 options:(id)arg3;
- (int)addPartitionFollowingPartition:(struct __DADisk *)arg1 newFilesystemOrContentNoFormat:(id)arg2 newName:(id)arg3 newSize:(id)arg4 options:(id)arg5;
- (int)setLabelForPartition:(struct __DADisk *)arg1 label:(id)arg2 options:(id)arg3;
- (int)mergePartitions:(id)arg1 filesystem:(id)arg2 name:(id)arg3 erase:(BOOL)arg4;
- (int)mergePartitions:(id)arg1 filesystem:(id)arg2 name:(id)arg3 erase:(BOOL)arg4 options:(id)arg5;
- (int)resizePartition:(struct __DADisk *)arg1 toBytes:(id)arg2 withNewMapEntries:(id)arg3;
- (int)resizeVolume:(struct __DADisk *)arg1 toBytes:(id)arg2 withNewMapEntries:(id)arg3;
- (int)resizeVolume:(struct __DADisk *)arg1 toBytes:(id)arg2 withNewMapEntries:(id)arg3 options:(id)arg4;
- (int)getResizeLimitsForCoreStorageLogicalVolume:(struct __DADisk *)arg1 returningInfo:(id *)arg2;
- (int)getResizeLimitsForCoreStorageLogicalVolume:(struct __DADisk *)arg1 forPhysicalVolume:(struct __DADisk *)arg2 returningInfo:(id *)arg3;
- (int)getResizeLimits:(struct __DADisk *)arg1 returningInfo:(id *)arg2;
- (int)splitPartition:(struct __DADisk *)arg1 intoNewPartitions:(id)arg2;
- (int)partitionDisk:(struct __DADisk *)arg1 withMap:(id)arg2 formatVolumes:(BOOL)arg3;
- (int)partitionDisk:(struct __DADisk *)arg1 withMap:(id)arg2 formatVolumes:(BOOL)arg3 options:(id)arg4;
- (int)defaultSchemeTypeForSingleFilesystem:(id)arg1 forWholeDisk:(struct __DADisk *)arg2;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (id)init;

@end

