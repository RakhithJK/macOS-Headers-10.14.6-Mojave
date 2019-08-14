//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsDaemon/NDNewsService-Protocol.h>
#import <NewsDaemon/NDNewsServiceClient-Protocol.h>

@class NSString;
@protocol NDNewsService;

@interface NDNewsDaemonContext : NSObject <NDNewsServiceClient, NDNewsService>
{
    CDUnknownBlockType _updateResultsHandler;
    id <NDNewsService> _daemon;
}

@property(retain, nonatomic) id <NDNewsService> daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (id)_queue;
- (void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType updateResultsHandler; // @synthesize updateResultsHandler=_updateResultsHandler;
- (void)fetchLatestResultsWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)serviceHasNewTodayResults;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

