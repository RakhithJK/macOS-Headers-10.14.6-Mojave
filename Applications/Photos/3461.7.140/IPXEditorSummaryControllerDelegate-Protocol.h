//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXEditorSummaryController, RDVersion;

@protocol IPXEditorSummaryControllerDelegate <NSObject>

@optional
- (void)livePhotoMediaToggleDisplayAsStill;
- (void)livePhotoMediaDeleteFrames;
- (unsigned long long)editorSummaryController:(IPXEditorSummaryController *)arg1 photoCollectionCountForVersion:(RDVersion *)arg2;
- (unsigned long long)editorSummaryController:(IPXEditorSummaryController *)arg1 photoIndexInCollectionForVersion:(RDVersion *)arg2;
@end

