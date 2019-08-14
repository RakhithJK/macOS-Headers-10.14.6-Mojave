//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSAttributedString;

@interface MKAttributionLabel : NSView
{
    NSAttributedString *_strokeText;
    NSAttributedString *_innerText;
    unsigned long long _mapType;
    BOOL _useDarkText;
}

@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)viewDidChangeEffectiveAppearance;
- (void)_updateTextColor;
- (void)_prepareLabel;
- (id)_attributesWithStroke:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

