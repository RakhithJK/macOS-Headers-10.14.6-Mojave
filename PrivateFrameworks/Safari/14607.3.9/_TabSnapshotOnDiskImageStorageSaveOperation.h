//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TabSnapshotOnDiskImageStorageSaveOperation : NSObject
{
    long long _fileOperationStatus;
    long long _metadataOperationStatus;
    NSString *_uniqueIdentifier;
}

@property(readonly, copy) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property long long metadataOperationStatus; // @synthesize metadataOperationStatus=_metadataOperationStatus;
@property long long fileOperationStatus; // @synthesize fileOperationStatus=_fileOperationStatus;
- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)arg1;

@end

