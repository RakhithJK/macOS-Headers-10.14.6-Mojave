//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCFeedItemFeature, FCFeedRange, NSString;

@interface FCFeedRequest : NSObject <NSCopying>
{
    BOOL _cachedOnly;
    NSString *_feedID;
    long long _feedBin;
    FCFeedRange *_feedRange;
    unsigned long long _maxCount;
    FCFeedItemFeature *_requiredFeature;
}

@property(copy, nonatomic) FCFeedItemFeature *requiredFeature; // @synthesize requiredFeature=_requiredFeature;
@property(nonatomic) BOOL cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(copy, nonatomic) FCFeedRange *feedRange; // @synthesize feedRange=_feedRange;
@property(nonatomic) long long feedBin; // @synthesize feedBin=_feedBin;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

