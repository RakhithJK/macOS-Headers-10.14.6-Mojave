//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueLabel-Protocol.h>

@class NSString;

@interface GEOVenueLabel : NSObject <GEOVenueLabel>
{
    NSString *_name;
    NSString *_shortName;
    NSString *_detail;
}

@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithLabel:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 shortName:(id)arg2 detail:(id)arg3;

@end

