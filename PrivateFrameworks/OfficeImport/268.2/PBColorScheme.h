//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBColorScheme : NSObject
{
}

+ (void)readFromColorScheme:(struct PptColorSchemeAtom *)arg1 toColorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4;
+ (void)addColorWithIndex:(int)arg1 fromScheme:(struct PptColorSchemeAtom *)arg2 atIndex:(int)arg3 inScheme:(id)arg4;
+ (void)addColorWithIndex:(int)arg1 fromScheme:(struct PptColorSchemeAtom *)arg2 colorTransform:(CDUnknownFunctionPointerType)arg3 atIndex:(int)arg4 inScheme:(id)arg5;
+ (unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)arg1;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1;

@end
