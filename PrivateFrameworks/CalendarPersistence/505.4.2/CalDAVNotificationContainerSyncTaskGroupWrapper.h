//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalCalDAVContainerSyncTaskGroupWrapper.h>

@class NSString;

@interface CalDAVNotificationContainerSyncTaskGroupWrapper : CalCalDAVContainerSyncTaskGroupWrapper
{
    NSString *_notificationPath;
}

@property(retain) NSString *notificationPath; // @synthesize notificationPath=_notificationPath;
- (void).cxx_destruct;
- (id)etagObjectsForServerFilenames:(id)arg1;
- (id)containerPath;
- (void)setSyncToken:(id)arg1;
- (void)setCTag:(id)arg1;
- (void)processAddedOrModified:(id)arg1 removed:(id)arg2;
- (id)initWithPrincipal:(id)arg1 notificationPath:(id)arg2;

@end

