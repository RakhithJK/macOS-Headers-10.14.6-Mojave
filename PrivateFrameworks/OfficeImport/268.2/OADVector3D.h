//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@interface OADVector3D : NSObject <NSCopying>
{
    float mDx;
    float mDy;
    float mDz;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)dz;
- (float)dy;
- (float)dx;
- (id)initWithDx:(float)arg1 dy:(float)arg2 dz:(float)arg3;

@end

