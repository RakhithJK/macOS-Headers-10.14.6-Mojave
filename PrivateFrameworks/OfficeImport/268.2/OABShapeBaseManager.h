//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OABFillPropertiesManager.h>

#import <OfficeImport/OABBasePropertiesManager-Protocol.h>

@class NSString;

@interface OABShapeBaseManager : OABFillPropertiesManager <OABBasePropertiesManager>
{
    struct EshShapeBase *mShapeBase;
}

- (int)shadowSoftness;
- (int)shadowOffsetY;
- (int)shadowOffsetX;
- (int)shadowAlpha;
- (int)shadowType;
- (BOOL)isShadowed;
- (int)strokeEndArrowLength;
- (int)strokeEndArrowWidth;
- (int)strokeEndArrowType;
- (int)strokeStartArrowLength;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowType;
- (int)strokeJoinStyle;
- (int)strokeCapStyle;
- (const struct EshTablePropVal<int> *)strokeCustomDash;
- (int)strokePresetDash;
- (int)strokeCompoundType;
- (int)strokeMiterLimit;
- (int)strokeWidth;
- (int)strokeFgAlpha;
- (struct EshBlip *)strokeFillBlipDataReference;
- (id)strokeFillBlipName;
- (unsigned int)strokeFillBlipID;
- (int)strokeFillType;
- (struct EshColor)shadowColor;
- (struct EshColor)strokeBgColor;
- (struct EshColor)strokeFgColor;
- (BOOL)isStroked;
- (id)initWithShapeBase:(struct EshShapeBase *)arg1 shapeType:(int)arg2 masterShape:(struct EshShape *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

