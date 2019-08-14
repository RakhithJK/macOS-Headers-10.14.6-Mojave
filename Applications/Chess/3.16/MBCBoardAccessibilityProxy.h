//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBCBoardView;

@interface MBCBoardAccessibilityProxy : NSObject
{
    MBCBoardView *fView;
    unsigned char fSquare;
}

+ (id)proxyWithView:(id)arg1 square:(unsigned char)arg2;
- (void)accessibilityPerformAction:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (struct CGRect)accessibilityFocusRingBounds;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithView:(id)arg1 square:(unsigned char)arg2;

@end

