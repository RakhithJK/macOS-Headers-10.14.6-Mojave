//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSDShapeInfo.h>

@class TSDDrawableInfo;

@interface TSDConnectionLineInfo : TSDShapeInfo
{
    TSDDrawableInfo *mConnectedFrom;
    TSDDrawableInfo *mConnectedTo;
    struct {
        unsigned int connectedFrom:1;
        unsigned int connectedTo:1;
    } mInvalidFlags;
}

@property(retain, nonatomic) TSDDrawableInfo *connectedTo; // @synthesize connectedTo=mConnectedTo;
@property(retain, nonatomic) TSDDrawableInfo *connectedFrom; // @synthesize connectedFrom=mConnectedFrom;
- (void)acceptVisitor:(id)arg1;
- (void)performBlockWithTemporaryLayout:(CDUnknownBlockType)arg1;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (BOOL)canAnchor;
- (struct CGAffineTransform)computeLayoutFullTransform;
- (void)computeLayoutInfoGeometry:(id *)arg1 andPathSource:(id *)arg2;
- (id)computeLayoutInfoGeometry;
- (id)presetKind;
- (Class)repClass;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;

@end

