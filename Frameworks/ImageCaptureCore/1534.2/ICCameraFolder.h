//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ImageCaptureCore/ICCameraItem.h>

@class NSArray;

@interface ICCameraFolder : ICCameraItem
{
    id _folderProperties;
}

- (void)sendDidRemoveFolderItemMessageToDelegateOfCameraDevice:(id)arg1;
- (void)sendDidAddFolderItemMessageToDelegateOfCameraDevice:(id)arg1;
- (id)metadataIfAvailable;
- (struct CGImage *)largeThumbnailIfAvailable;
- (struct CGImage *)thumbnailIfAvailable;
- (id)getFileWithID:(unsigned long long)arg1;
- (id)getFolderWithID:(unsigned long long)arg1;
- (void)deleteFileWithID:(unsigned long long)arg1;
- (void)deleteFolderWithID:(unsigned long long)arg1;
- (BOOL)hasThumbnail;
- (id)folders;
- (id)files;
- (id)modificationDate;
- (id)creationDate;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly) NSArray *contents;
- (void)deleteFolder:(id)arg1;
- (void)deleteFile:(id)arg1;
- (void)deleteItem:(id)arg1;
- (void)addFolder:(id)arg1;
- (void)addFiles:(id)arg1;
- (void)addFile:(id)arg1;
- (void)removeContent;
- (void)addContent:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;

@end

