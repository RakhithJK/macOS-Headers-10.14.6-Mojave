//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIAutoEnhanceFace : NSObject
{
    int size;
    int centerX;
    int centerY;
    double I;
    double Q;
}

@property(readonly) double Q; // @synthesize Q;
@property(readonly) double I; // @synthesize I;
@property(readonly) int centerY; // @synthesize centerY;
@property(readonly) int centerX; // @synthesize centerX;
@property(readonly) int size; // @synthesize size;
- (struct CGRect)faceRect;
- (id)description;
- (id)initWithBounds:(struct CGRect)arg1 andImage:(id)arg2 usingContext:(id)arg3;

@end

