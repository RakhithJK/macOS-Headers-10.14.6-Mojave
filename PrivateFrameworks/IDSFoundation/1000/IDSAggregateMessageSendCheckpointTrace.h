//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CommonUtilities/CUTCheckpointTrace.h>

@class APSOutgoingMessageCheckpointTrace;

@interface IDSAggregateMessageSendCheckpointTrace : CUTCheckpointTrace
{
    APSOutgoingMessageCheckpointTrace *_apsMessageTrace;
}

- (void).cxx_destruct;
@property(retain, nonatomic) APSOutgoingMessageCheckpointTrace *apsMessageTrace; // @synthesize apsMessageTrace=_apsMessageTrace;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithUniqueIdentifier:(id)arg1;

@end

