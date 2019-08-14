//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingCursor.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCFeedRange;

@interface FCSingleTagFeedGroupEmitterCursor : FCFeedGroupEmittingCursor <NSCopying>
{
    FCFeedRange *_freeFeedRange;
    FCFeedRange *_paidFeedRange;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) FCFeedRange *paidFeedRange; // @synthesize paidFeedRange=_paidFeedRange;
@property(copy, nonatomic) FCFeedRange *freeFeedRange; // @synthesize freeFeedRange=_freeFeedRange;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

