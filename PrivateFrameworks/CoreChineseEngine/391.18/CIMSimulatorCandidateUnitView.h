//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSAttributedString, NSColor, NSString;

@interface CIMSimulatorCandidateUnitView : NSView
{
    NSString *_title;
    NSAttributedString *_attributedStringValue;
    NSColor *_backgroundColor;
    NSColor *_backgroundBorderColor;
}

@property(retain, nonatomic) NSColor *backgroundBorderColor; // @synthesize backgroundBorderColor=_backgroundBorderColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSAttributedString *attributedStringValue; // @synthesize attributedStringValue=_attributedStringValue;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
