//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/ODICycle.h>

@interface ODICycle5 : ODICycle
{
}

+ (BOOL)map2NodeWithState:(id)arg1;
+ (BOOL)map1NodeWithState:(id)arg1;
+ (void)mapTransition:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (float)intersectionAngleNextToAngle:(float)arg1 isAfter:(BOOL)arg2 state:(id)arg3;
+ (void)mapStyleForTransition:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)addShapeForTransition:(id)arg1 startAngle:(float)arg2 endAngle:(float)arg3 state:(id)arg4;
+ (float)normalizedAngle:(float)arg1;
+ (void)mapNode:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (void)addShapeForNode:(id)arg1 relativeBounds:(struct CGRect)arg2 state:(id)arg3;
+ (struct CGRect)mapGSpaceWithState:(id)arg1;
+ (struct CGSize)nodeSizeWithState:(id)arg1;

@end

