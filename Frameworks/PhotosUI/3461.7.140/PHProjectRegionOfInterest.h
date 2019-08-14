//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSSecureCoding-Protocol.h>

@class NSString;

@interface PHProjectRegionOfInterest : NSObject <NSSecureCoding>
{
    double _weight;
    double _quality;
    NSString *_identifier;
    struct CGRect _rect;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) double quality; // @synthesize quality=_quality;
@property(readonly, nonatomic) double weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithRect:(struct CGRect)arg1 weight:(id)arg2 quality:(id)arg3 identifier:(id)arg4;

@end

