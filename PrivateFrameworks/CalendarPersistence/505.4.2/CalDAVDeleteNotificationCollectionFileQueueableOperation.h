//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVPersistentQueueableOperation.h>

@class NSString;

@interface CalDAVDeleteNotificationCollectionFileQueueableOperation : CalDAVPersistentQueueableOperation
{
    NSString *_filename;
    NSString *_notificationCollectionPath;
}

@property(retain) NSString *notificationCollectionPath; // @synthesize notificationCollectionPath=_notificationCollectionPath;
@property(retain) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (void)handleRemovalCleanup;
- (void)performOperation;
- (id)initWithChangeRequest:(id)arg1 notificationCollectionPath:(id)arg2 filename:(id)arg3 forSession:(id)arg4;

@end

