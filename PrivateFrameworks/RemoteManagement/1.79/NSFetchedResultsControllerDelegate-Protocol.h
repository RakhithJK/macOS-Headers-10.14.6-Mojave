//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RemoteManagement/NSObject-Protocol.h>

@class NSFetchedResultsController, NSIndexPath, NSString;
@protocol NSFetchedResultsSectionInfo;

@protocol NSFetchedResultsControllerDelegate <NSObject>

@optional
- (NSString *)controller:(NSFetchedResultsController *)arg1 sectionIndexTitleForSectionName:(NSString *)arg2;
- (void)controllerDidChangeContent:(NSFetchedResultsController *)arg1;
- (void)controllerWillChangeContent:(NSFetchedResultsController *)arg1;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeSection:(id <NSFetchedResultsSectionInfo>)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
@end

