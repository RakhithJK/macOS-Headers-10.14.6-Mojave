//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FRFeedCollectionViewLayoutAdCacheModel, NSMutableDictionary;

@interface FRFeedCollectionViewLayoutAdCache : NSObject <NSCopying>
{
    FRFeedCollectionViewLayoutAdCacheModel *_firstObject;
    FRFeedCollectionViewLayoutAdCacheModel *_lastObject;
    NSMutableDictionary *_cache;
}

@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) FRFeedCollectionViewLayoutAdCacheModel *lastObject; // @synthesize lastObject=_lastObject;
@property(retain, nonatomic) FRFeedCollectionViewLayoutAdCacheModel *firstObject; // @synthesize firstObject=_firstObject;
- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

