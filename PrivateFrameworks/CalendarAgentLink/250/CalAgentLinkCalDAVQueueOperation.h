//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarAgentLink/CalAgentLinkOneWayOperation.h>

@class NSString;

@interface CalAgentLinkCalDAVQueueOperation : CalAgentLinkOneWayOperation
{
    NSString *_queueAction;
    NSString *_changeRequestManagedObjectID;
    NSString *_principalManagedObjectID;
}

@property(retain, nonatomic) NSString *principalManagedObjectID; // @synthesize principalManagedObjectID=_principalManagedObjectID;
@property(retain, nonatomic) NSString *changeRequestManagedObjectID; // @synthesize changeRequestManagedObjectID=_changeRequestManagedObjectID;
@property(retain, nonatomic) NSString *queueAction; // @synthesize queueAction=_queueAction;
- (void).cxx_destruct;
- (id)inputPayload;
- (id)description;
- (id)initWithAction:(id)arg1 principalManagedObjectID:(id)arg2 changeRequestManagedObjectID:(id)arg3;
- (id)init;

@end

