//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@interface TSDContentLocation : NSObject <NSCopying>
{
    double _viewScale;
    struct CGPoint _unscaledPoint;
}

+ (id)contentLocationInterpolatingFromLocation:(id)arg1 toLocation:(id)arg2 fraction:(double)arg3;
+ (id)contentLocationWithUnscaledPoint:(struct CGPoint)arg1 viewScale:(double)arg2;
+ (id)contentLocation;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(nonatomic) struct CGPoint unscaledPoint; // @synthesize unscaledPoint=_unscaledPoint;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
