//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocs/BRFileObjectID.h>

@interface BRInodeObjectID : BRFileObjectID
{
    unsigned long long _ino;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isFolderOrAliasID;
- (id)folderID;
- (unsigned long long)rawID;
- (id)asString;
- (id)description;
- (id)initWithFileID:(unsigned long long)arg1;

@end

