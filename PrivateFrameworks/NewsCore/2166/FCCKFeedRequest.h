//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FCCKFeedRequest : NSObject
{
    NSString *_feedID;
    NSData *_startCursor;
    unsigned long long _startOrder;
    unsigned long long _orderLimit;
    unsigned long long _softResultsLimit;
    unsigned long long _hardResultsLimit;
}

@property(nonatomic) unsigned long long hardResultsLimit; // @synthesize hardResultsLimit=_hardResultsLimit;
@property(nonatomic) unsigned long long softResultsLimit; // @synthesize softResultsLimit=_softResultsLimit;
@property(nonatomic) unsigned long long orderLimit; // @synthesize orderLimit=_orderLimit;
@property(nonatomic) unsigned long long startOrder; // @synthesize startOrder=_startOrder;
@property(copy, nonatomic) NSData *startCursor; // @synthesize startCursor=_startCursor;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

