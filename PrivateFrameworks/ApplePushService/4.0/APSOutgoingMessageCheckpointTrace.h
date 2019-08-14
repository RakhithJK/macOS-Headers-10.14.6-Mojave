//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CommonUtilities/CUTCheckpointTrace.h>

@class CUTCheckpointRange;

@interface APSOutgoingMessageCheckpointTrace : CUTCheckpointTrace
{
    CUTCheckpointRange *_sendToDaemon;
    CUTCheckpointRange *_messageOnQueue;
    CUTCheckpointRange *_waitForACK;
}

@property(readonly, nonatomic) CUTCheckpointRange *waitForACK; // @synthesize waitForACK=_waitForACK;
@property(readonly, nonatomic) CUTCheckpointRange *messageOnQueue; // @synthesize messageOnQueue=_messageOnQueue;
@property(readonly, nonatomic) CUTCheckpointRange *sendToDaemon; // @synthesize sendToDaemon=_sendToDaemon;
- (void)dealloc;
- (id)initWithUniqueIdentifier:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;

@end

