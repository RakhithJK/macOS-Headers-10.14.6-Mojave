//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "Node.h"

@class NSString;

@interface Disk : Node
{
    struct FSRef _fsref;
    BOOL _fsrefValid;
    short _FSVolumeRefNum;
    struct FSVolumeInfo _FSVolumeInfo;
    NSString *_afpZone;
    NSString *_afpServer;
    BOOL _FSVolumeInfoValid;
    BOOL _afpInfoValid;
}

- (id)container;
- (id)afpServer;
- (id)afpZone;
- (BOOL)afpInfoValid;
- (void)setIgnorePrivileges:(BOOL)arg1;
- (BOOL)ignorePrivileges;
- (int)format;
- (BOOL)volumeInfoValid;
- (BOOL)startup;
- (BOOL)localVolume;
- (BOOL)ejectable;
- (id)freeSpace;
- (id)capacity;
- (id)uniqueID;
- (const struct FSRef *)fsref;
- (void)dealloc;
- (id)initDiskWithParent:(id)arg1 andName:(id)arg2;
- (id)initDiskWithParent:(id)arg1 andURL:(id)arg2;
- (id)objectSpecifier;

@end
