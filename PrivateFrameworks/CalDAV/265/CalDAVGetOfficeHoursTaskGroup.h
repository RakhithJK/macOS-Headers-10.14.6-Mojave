//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPropFindTaskDelegate-Protocol.h>

@class CoreDAVPropFindTask, ICSDocument, NSString, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>
{
    ICSDocument *_calendarAvailability;
    NSURL *_inboxURL;
    CoreDAVPropFindTask *_fetchTask;
}

@property(retain, nonatomic) CoreDAVPropFindTask *fetchTask; // @synthesize fetchTask=_fetchTask;
@property(retain, nonatomic) NSURL *inboxURL; // @synthesize inboxURL=_inboxURL;
@property(retain, nonatomic) ICSDocument *calendarAvailability; // @synthesize calendarAvailability=_calendarAvailability;
- (void).cxx_destruct;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)_finishWithError:(id)arg1;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

