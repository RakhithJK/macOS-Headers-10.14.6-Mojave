//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MBCAnimation.h"

@class MBCMove;

@interface MBCMoveAnimation : MBCAnimation
{
    unsigned char fPiece;
    MBCMove *fMove;
    struct MBCPosition fFrom;
    struct MBCPosition fDelta;
}

+ (id)moveAnimation:(id)arg1 board:(id)arg2 view:(id)arg3;
- (void)dealloc;
- (void)endState;
- (void)step:(float)arg1;
- (void)startState;

@end

