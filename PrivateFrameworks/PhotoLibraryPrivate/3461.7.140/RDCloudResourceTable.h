//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDCloudResourceTable : RDTable
{
    LiKeyPath *_associatedModelTypeKeyPath;
    LiKeyPath *_identifierKeyPath;
    LiKeyPath *_typeKeyPath;
    LiKeyPath *_availableKeyPath;
    LiKeyPath *_fingerprintKeyPath;
    LiKeyPath *_statusKeyPath;
    LiKeyPath *_fileSizeKeyPath;
    LiKeyPath *_widthKeyPath;
    LiKeyPath *_heightKeyPath;
    LiKeyPath *_lastAccessDateKeyPath;
    LiKeyPath *_pinnedUntilDateKeyPath;
    LiKeyPath *_UTIKeyPath;
    LiKeyPath *_transientFilePathKeyPath;
    LiKeyPath *_isOnDiskKeyPath;
    LiKeyPath *_adjustmentUuidKeyPath;
    LiKeyPath *_baseScoreKeyPath;
    LiKeyPath *_isFullSizeOutputKeyPath;
}

+ (SEL)deletedModelIdsMulticasterSelector;
+ (SEL)updatedModelKeyPathsMulticasterSelector;
+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *isFullSizeOutputKeyPath; // @synthesize isFullSizeOutputKeyPath=_isFullSizeOutputKeyPath;
@property(readonly, nonatomic) LiKeyPath *baseScoreKeyPath; // @synthesize baseScoreKeyPath=_baseScoreKeyPath;
@property(readonly, nonatomic) LiKeyPath *adjustmentUuidKeyPath; // @synthesize adjustmentUuidKeyPath=_adjustmentUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *isOnDiskKeyPath; // @synthesize isOnDiskKeyPath=_isOnDiskKeyPath;
@property(readonly, nonatomic) LiKeyPath *transientFilePathKeyPath; // @synthesize transientFilePathKeyPath=_transientFilePathKeyPath;
@property(readonly, nonatomic) LiKeyPath *UTIKeyPath; // @synthesize UTIKeyPath=_UTIKeyPath;
@property(readonly, nonatomic) LiKeyPath *pinnedUntilDateKeyPath; // @synthesize pinnedUntilDateKeyPath=_pinnedUntilDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *lastAccessDateKeyPath; // @synthesize lastAccessDateKeyPath=_lastAccessDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *heightKeyPath; // @synthesize heightKeyPath=_heightKeyPath;
@property(readonly, nonatomic) LiKeyPath *widthKeyPath; // @synthesize widthKeyPath=_widthKeyPath;
@property(readonly, nonatomic) LiKeyPath *fileSizeKeyPath; // @synthesize fileSizeKeyPath=_fileSizeKeyPath;
@property(readonly, nonatomic) LiKeyPath *statusKeyPath; // @synthesize statusKeyPath=_statusKeyPath;
@property(readonly, nonatomic) LiKeyPath *fingerprintKeyPath; // @synthesize fingerprintKeyPath=_fingerprintKeyPath;
@property(readonly, nonatomic) LiKeyPath *availableKeyPath; // @synthesize availableKeyPath=_availableKeyPath;
@property(readonly, nonatomic) LiKeyPath *typeKeyPath; // @synthesize typeKeyPath=_typeKeyPath;
@property(readonly, nonatomic) LiKeyPath *identifierKeyPath; // @synthesize identifierKeyPath=_identifierKeyPath;
@property(readonly, nonatomic) LiKeyPath *associatedModelTypeKeyPath; // @synthesize associatedModelTypeKeyPath=_associatedModelTypeKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;
- (id)iLMBPropertyPaths;

@end

