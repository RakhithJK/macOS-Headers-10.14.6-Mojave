//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVEntityQueueableOperation.h>

@class NSString;

@interface CalDAVDeleteDropBoxQueueableOperation : CalDAVEntityQueueableOperation
{
    NSString *_dropBoxUri;
}

- (void).cxx_destruct;
- (BOOL)_isLowPriority;
- (void)performOperation;
- (id)initWithChangeRequest:(id)arg1 dropBoxUri:(id)arg2 fromSource:(id)arg3;

@end

