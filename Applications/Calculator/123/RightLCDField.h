//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSLayoutConstraint, NSMutableArray;

@interface RightLCDField : NSTextField
{
    NSLayoutConstraint *_fieldHeightConstraint;
    NSMutableArray *_fontSizeTable;
}

@property(retain, nonatomic) NSMutableArray *fontSizeTable; // @synthesize fontSizeTable=_fontSizeTable;
@property(retain, nonatomic) NSLayoutConstraint *fieldHeightConstraint; // @synthesize fieldHeightConstraint=_fieldHeightConstraint;
- (void)setStringValue:(id)arg1;
- (void)setHeightConstraint:(float)arg1;
- (int)fontSizeForString:(id)arg1;
- (double)widthOfString:(id)arg1 withFont:(id)arg2;
- (double)heightOfString:(id)arg1 withFont:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

