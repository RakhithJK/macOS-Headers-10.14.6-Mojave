//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WDProtocolCommand;

@interface PendingResponseData : NSObject
{
    long long _sequenceId;
    WDProtocolCommand *_originatingCommand;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) WDProtocolCommand *originatingCommand; // @synthesize originatingCommand=_originatingCommand;
@property(nonatomic) long long sequenceId; // @synthesize sequenceId=_sequenceId;
- (void).cxx_destruct;

@end
