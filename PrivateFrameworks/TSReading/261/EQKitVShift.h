//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/EQKitBox.h>

@interface EQKitVShift : EQKitBox
{
    EQKitBox *mBox;
    double mOffset;
}

@property(readonly, nonatomic) double offset; // @synthesize offset=mOffset;
@property(readonly, nonatomic) EQKitBox *box; // @synthesize box=mBox;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;
- (BOOL)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (struct CGRect)erasableBounds;
- (double)depth;
- (double)height;
- (double)width;
- (void)dealloc;
- (id)initWithBox:(id)arg1 offset:(double)arg2;
- (id)init;

@end

