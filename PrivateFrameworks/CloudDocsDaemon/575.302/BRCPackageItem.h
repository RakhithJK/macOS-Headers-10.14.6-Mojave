//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCGenerationID, NSData, NSString;

@interface BRCPackageItem : NSObject
{
    BOOL _isDirty;
    NSString *_symlinkContent;
    NSData *_contentSignature;
    BOOL _mode;
    int _type;
    long long _assetRank;
    unsigned long long _packageID;
    unsigned long long _fileID;
    BRCGenerationID *_generationID;
    NSString *_pathInPackage;
    long long _mtime;
    long long _size;
    NSData *_quarantineInfo;
    NSData *_xattrs;
}

+ (BOOL)dumpSession:(id)arg1 toContext:(id)arg2 db:(id)arg3 error:(id *)arg4;
+ (BOOL)packageChangedAtRelativePath:(id)arg1;
+ (BOOL)updateSnapshotAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)_rescanDirectoryInPackage:(id)arg1 error:(id *)arg2;
+ (BOOL)_deleteSnapshotAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)updateSignaturesForFilesInItem:(id)arg1 fromCKPackage:(id)arg2 error:(id *)arg3;
+ (long long)aggregatePackageSizeForPackageID:(unsigned int)arg1 session:(id)arg2;
+ (struct PQLResultSet *)packageItemsForItem:(id)arg1 order:(unsigned long long)arg2;
+ (struct PQLResultSet *)packageItemsForDocumentID:(unsigned int)arg1 order:(unsigned long long)arg2 session:(id)arg3;
+ (long long)largestPackageItemSizeInDocumentID:(unsigned int)arg1 session:(id)arg2;
+ (id)packageItemForRelpath:(id)arg1;
+ (id)packageItemWithDocumentID:(unsigned int)arg1 relativePath:(id)arg2 session:(id)arg3;
@property(readonly, nonatomic) NSData *xattrs; // @synthesize xattrs=_xattrs;
@property(readonly, nonatomic) NSData *quarantineInfo; // @synthesize quarantineInfo=_quarantineInfo;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) BOOL mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) long long mtime; // @synthesize mtime=_mtime;
@property(readonly, nonatomic) NSString *pathInPackage; // @synthesize pathInPackage=_pathInPackage;
@property(readonly, nonatomic) BRCGenerationID *generationID; // @synthesize generationID=_generationID;
@property(readonly, nonatomic) unsigned long long fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) unsigned long long packageDocumentID; // @synthesize packageDocumentID=_packageID;
@property(readonly, nonatomic) long long assetRank; // @synthesize assetRank=_assetRank;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)setDirty:(BOOL)arg1 session:(id)arg2;
- (BOOL)saveToDBWithSession:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)initWithPBItem:(id)arg1 forLocalItem:(id)arg2;
- (id)initWithRelativePath:(id)arg1 markDirty:(BOOL)arg2;
- (id)description;
@property(readonly, nonatomic) NSData *contentSignature;
@property(readonly, nonatomic) NSString *symlinkContent;
- (BOOL)changedAtRelpath:(id)arg1;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL isSymLink;
@property(readonly, nonatomic) BOOL isFile;

@end
