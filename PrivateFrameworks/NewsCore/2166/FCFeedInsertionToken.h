//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCFDBFeed;

@interface FCFeedInsertionToken : NSObject
{
    FCFDBFeed *_fromFeed;
    unsigned long long _fromOrder;
    unsigned long long _toOrder;
}

@property(nonatomic) unsigned long long toOrder; // @synthesize toOrder=_toOrder;
@property(nonatomic) unsigned long long fromOrder; // @synthesize fromOrder=_fromOrder;
@property(retain, nonatomic) FCFDBFeed *fromFeed; // @synthesize fromFeed=_fromFeed;
- (void).cxx_destruct;

@end

