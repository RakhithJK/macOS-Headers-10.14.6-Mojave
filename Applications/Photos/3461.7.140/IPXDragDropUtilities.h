//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPXDragDropUtilities : NSObject
{
}

+ (id)fileTypeForModel:(id)arg1 exportAsMaster:(BOOL)arg2;
+ (id)fileTypeForVersion:(id)arg1 exportAsMaster:(BOOL)arg2;
+ (id)filePreviewTypeForVersion:(id)arg1 exportAsMaster:(BOOL)arg2;
+ (id)alternateFileTypeForVersion:(id)arg1 exportAsMaster:(BOOL)arg2;
+ (id)temporaryExportPathForVersion:(id)arg1 exportAsMaster:(BOOL)arg2;
+ (id)fileNameForVersion:(id)arg1 exportAsMaster:(BOOL)arg2;
+ (id)fileExtensionForVersion:(id)arg1 exportAsMaster:(BOOL)arg2;
+ (id)sanitizedFileNameForString:(id)arg1;
+ (BOOL)canSubstituteMasterForExport:(id)arg1;
+ (id)photoLibraryFileExtensions;
+ (BOOL)isUnsupportedVersion:(id)arg1;
+ (long long)effectiveDragPositionsForItemsAtIndexPaths:(id)arg1 movedToIndexPath:(id)arg2;
+ (id)fileTypeForVersion:(id)arg1;
+ (struct IPXAssetTypeCounts)typeCountsForDraggingSession:(id)arg1;

@end

