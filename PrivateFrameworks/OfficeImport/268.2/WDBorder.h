//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OITSUColor;

@interface WDBorder : NSObject <NSCopying>
{
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setFrame:(BOOL)arg1;
- (BOOL)frame;
- (void)setShadow:(BOOL)arg1;
- (BOOL)shadow;
- (void)setSpace:(unsigned char)arg1;
- (unsigned char)space;
- (void)setWidth:(unsigned char)arg1;
- (unsigned char)width;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)setSingleBlackBorder;
- (void)setNullBorder;
- (void)setBorder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBorder:(id)arg1;
- (id)init;

@end

