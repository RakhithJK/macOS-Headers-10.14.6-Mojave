//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTextItemDisplayConfig-Protocol.h>

@interface GEOTextItemDisplayConfig : NSObject <GEOTextItemDisplayConfig>
{
    unsigned int _maxItemsPerRow;
    unsigned int _maxRowCount;
}

@property(readonly, nonatomic) unsigned int maxRowCount; // @synthesize maxRowCount=_maxRowCount;
@property(readonly, nonatomic) unsigned int maxItemsPerRow; // @synthesize maxItemsPerRow=_maxItemsPerRow;
- (id)initWithTextItemDisplayConfig:(id)arg1;
- (id)initWithMaxItemsPerRow:(unsigned int)arg1 maxRowCount:(unsigned int)arg2;

@end

