//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDRetainedSearchMetadata, NSString;

@interface GEORetainedSearchMetadata : NSObject <NSCopying>
{
    GEOPDRetainedSearchMetadata *_retainedSearchMetadata;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_retainedSearchMetadata;
@property(readonly, nonatomic, getter=_query) NSString *query;
- (id)initWithRetainedSearchMetadata:(id)arg1;

@end

