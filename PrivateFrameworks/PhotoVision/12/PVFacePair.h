//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PVFace;

__attribute__((visibility("hidden")))
@interface PVFacePair : NSObject
{
    PVFace *_face1;
    PVFace *_face2;
    double _score;
}

@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) PVFace *face2; // @synthesize face2=_face2;
@property(readonly, nonatomic) PVFace *face1; // @synthesize face1=_face1;
- (void).cxx_destruct;
- (id)initWithFace:(id)arg1 andFace:(id)arg2 andScore:(double)arg3;

@end

