//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalCalDAVSynchronousTaskGroup.h>

#import <CalendarPersistence/CoreDAVContainerInfoTaskGroupDelegate-Protocol.h>

@class NSSet, NSString;

@interface CalCalDAVCalendarInfoTaskGroupWrapper : CalCalDAVSynchronousTaskGroup <CoreDAVContainerInfoTaskGroupDelegate>
{
    NSSet *_containers;
}

@property(retain) NSSet *containers; // @synthesize containers=_containers;
- (void).cxx_destruct;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

