//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOMapFeatureBuilding : NSObject
{
    CDStruct_dcb4d614 *_feature;
    NSArray *_sections;
}

@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFeature:(CDStruct_dcb4d614 *)arg1;

@end

