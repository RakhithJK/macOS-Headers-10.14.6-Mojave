//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSCopying-Protocol.h>

@class NSString;

@interface AXMDisplay : NSObject <NSCopying>
{
    BOOL _supportsDeepColor;
    NSString *_name;
    double _scale;
    double _orientation;
    long long _physicalOrientation;
    long long _backingType;
    struct CGSize _size;
    struct CGRect _referenceBounds;
}

@property(nonatomic) long long backingType; // @synthesize backingType=_backingType;
@property(nonatomic) BOOL supportsDeepColor; // @synthesize supportsDeepColor=_supportsDeepColor;
@property(nonatomic) struct CGRect referenceBounds; // @synthesize referenceBounds=_referenceBounds;
@property(nonatomic) long long physicalOrientation; // @synthesize physicalOrientation=_physicalOrientation;
@property(nonatomic) double orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (struct CGRect)convertRectToDisplay:(struct CGRect)arg1;
- (struct CGPoint)convertPointToDisplay:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)_initWithBackingType:(long long)arg1;

@end

