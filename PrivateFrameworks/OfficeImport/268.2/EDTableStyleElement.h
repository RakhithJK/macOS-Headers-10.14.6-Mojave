//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDKeyedObject-Protocol.h>
#import <OfficeImport/NSCopying-Protocol.h>

@class EDCollection, EDDifferentialStyle, NSString;

@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying>
{
    EDCollection *mDifferentialStyles;
    int mType;
    unsigned int mBandSize;
    EDDifferentialStyle *mDifferentialStyle;
}

+ (id)tableStyleElementWithResources:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setDifferentialStyleWithIndex:(unsigned long long)arg1;
- (void)setDifferentialStyle:(id)arg1;
- (id)differentialStyle;
- (void)setBandSize:(unsigned int)arg1;
- (unsigned int)bandSize;
- (void)setType:(int)arg1;
- (int)type;
- (long long)key;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResources:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

