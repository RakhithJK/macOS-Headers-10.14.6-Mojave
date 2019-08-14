//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreUI/CUIPSDGradientColorStop.h>

#import <CoreUI/NSCoding-Protocol.h>

@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding>
{
    struct _psdGradientColor leadOutColor;
}

+ (id)doubleColorStopWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;
+ (void)initialize;
- (id)description;
- (BOOL)isDoubleStop;
- (struct _psdGradientColor)leadOutColor;
- (struct _psdGradientColor)leadInColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;

@end

