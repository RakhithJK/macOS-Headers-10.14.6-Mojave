//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString, SKDisk, SKFilesystem;

@interface SUPartition : NSObject <NSCopying>
{
    BOOL _hasResizeLimits;
    BOOL _canMove;
    BOOL _canResize;
    BOOL _canRemove;
    BOOL _canReformat;
    BOOL _canRename;
    BOOL _isNamePlaceholder;
    BOOL _isFreeSpace;
    BOOL _isMounted;
    BOOL _isJournaled;
    BOOL _isStartupDisk;
    BOOL _isUserHomeDisk;
    BOOL _willBeRenamed;
    BOOL _willBeResized;
    BOOL _willBeErased;
    BOOL _isVirtual;
    int _formatType;
    SKDisk *_disk;
    NSString *_name;
    NSString *_descriptiveName;
    unsigned long long _startLocation;
    unsigned long long _rawMinSize;
    unsigned long long _usedSize;
    SKFilesystem *_filesystem;
    unsigned long long _currentSize;
    unsigned long long _complexSize;
    unsigned long long _minNonComplexSize;
    unsigned long long _nonComplexSize;
    long long _idNumber;
    NSMutableArray *_nestedPartitions;
}

@property(retain) NSMutableArray *nestedPartitions; // @synthesize nestedPartitions=_nestedPartitions;
@property BOOL isVirtual; // @synthesize isVirtual=_isVirtual;
@property long long idNumber; // @synthesize idNumber=_idNumber;
@property unsigned long long nonComplexSize; // @synthesize nonComplexSize=_nonComplexSize;
@property unsigned long long minNonComplexSize; // @synthesize minNonComplexSize=_minNonComplexSize;
@property unsigned long long complexSize; // @synthesize complexSize=_complexSize;
@property unsigned long long currentSize; // @synthesize currentSize=_currentSize;
@property(retain, nonatomic) SKFilesystem *filesystem; // @synthesize filesystem=_filesystem;
@property(nonatomic) int formatType; // @synthesize formatType=_formatType;
@property(nonatomic) BOOL willBeErased; // @synthesize willBeErased=_willBeErased;
@property(nonatomic) BOOL willBeResized; // @synthesize willBeResized=_willBeResized;
@property(nonatomic) BOOL willBeRenamed; // @synthesize willBeRenamed=_willBeRenamed;
@property(nonatomic) BOOL isUserHomeDisk; // @synthesize isUserHomeDisk=_isUserHomeDisk;
@property(nonatomic) BOOL isStartupDisk; // @synthesize isStartupDisk=_isStartupDisk;
@property(nonatomic) BOOL isJournaled; // @synthesize isJournaled=_isJournaled;
@property(nonatomic) BOOL isMounted; // @synthesize isMounted=_isMounted;
@property(nonatomic) BOOL isFreeSpace; // @synthesize isFreeSpace=_isFreeSpace;
@property(nonatomic) BOOL isNamePlaceholder; // @synthesize isNamePlaceholder=_isNamePlaceholder;
@property(nonatomic) BOOL canRename; // @synthesize canRename=_canRename;
@property(nonatomic) BOOL canReformat; // @synthesize canReformat=_canReformat;
@property(nonatomic) BOOL canRemove; // @synthesize canRemove=_canRemove;
@property(nonatomic) BOOL canResize; // @synthesize canResize=_canResize;
@property(nonatomic) BOOL canMove; // @synthesize canMove=_canMove;
@property(nonatomic) BOOL hasResizeLimits; // @synthesize hasResizeLimits=_hasResizeLimits;
@property(nonatomic) unsigned long long usedSize; // @synthesize usedSize=_usedSize;
@property(nonatomic) unsigned long long rawMinSize; // @synthesize rawMinSize=_rawMinSize;
@property(nonatomic) unsigned long long startLocation; // @synthesize startLocation=_startLocation;
@property(retain) NSString *descriptiveName; // @synthesize descriptiveName=_descriptiveName;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) SKDisk *disk; // @synthesize disk=_disk;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long size;
@property(nonatomic) unsigned long long minSize;
- (id)associatedPartitions;
- (void)addAssociatedPartition:(id)arg1;
- (void)setIsFirstDisk;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIDNumber:(long long)arg1;
- (id)initWithSKDisk:(id)arg1 withIDNumber:(long long)arg2 editable:(BOOL)arg3;
- (id)initWithFreespace:(unsigned long long)arg1 WithIDNumber:(long long)arg2;

@end

