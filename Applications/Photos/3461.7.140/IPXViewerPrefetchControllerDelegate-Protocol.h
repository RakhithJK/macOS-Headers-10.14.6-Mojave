//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class IPXViewerPrefetchController, NSArray, NSMapTable, RDVersion;

@protocol IPXViewerPrefetchControllerDelegate
- (NSMapTable *)candidateVersionsIdentifiersToIndexesForViewerPrefetchController:(IPXViewerPrefetchController *)arg1;
- (RDVersion *)prominentVersionForViewerPrefetchController:(IPXViewerPrefetchController *)arg1;
- (NSArray *)displayedVersionsForViewerPrefetchController:(IPXViewerPrefetchController *)arg1;
- (NSArray *)candidateVersionsForViewerPrefetchController:(IPXViewerPrefetchController *)arg1;
@end

