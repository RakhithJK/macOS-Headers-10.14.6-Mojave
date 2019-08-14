//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIKBRenderEffect-Protocol.h>

@class NSString, UIKBGradient;

__attribute__((visibility("hidden")))
@interface UIKBDivotedEffect : NSObject <UIKBRenderEffect>
{
    double _weight;
}

@property(nonatomic) double weight; // @synthesize weight=_weight;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) SEL renderSelector;
@property(readonly, nonatomic) BOOL renderUnder;
@property(readonly, nonatomic) UIKBGradient *gradient;
@property(readonly, nonatomic) BOOL usesRGBColors;
- (struct CGColor *)CGColor;
@property(readonly, nonatomic) BOOL isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

