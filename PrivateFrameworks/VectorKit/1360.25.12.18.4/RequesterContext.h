//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileRequester;

__attribute__((visibility("hidden")))
@interface RequesterContext : NSObject
{
    GEOTileRequester *_tileRequester;
    struct _GEOTileKey _key;
    unsigned long long _featureID;
}

@property(nonatomic) unsigned long long featureID; // @synthesize featureID=_featureID;
@property(nonatomic) struct _GEOTileKey key; // @synthesize key=_key;
@property(retain, nonatomic) GEOTileRequester *tileRequester; // @synthesize tileRequester=_tileRequester;
- (void)dealloc;

@end

