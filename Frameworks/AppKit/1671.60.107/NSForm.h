//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSMatrix.h>

@interface NSForm : NSMatrix
{
}

+ (void)initialize;
- (void)setTextBaseWritingDirection:(long long)arg1;
- (void)setTitleBaseWritingDirection:(long long)arg1;
- (void)selectTextAtIndex:(long long)arg1;
- (long long)indexOfCellWithTag:(long long)arg1;
- (void)removeEntryAtIndex:(long long)arg1;
- (id)insertEntry:(id)arg1 atIndex:(long long)arg2;
- (id)addEntry:(id)arg1;
- (void)drawCellAtIndex:(long long)arg1;
- (id)cellAtIndex:(long long)arg1;
- (void)setTextFont:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (double)preferredTextFieldWidth;
- (void)setPreferredTextFieldWidth:(double)arg1;
- (void)setTextAlignment:(unsigned long long)arg1;
- (void)setTitleAlignment:(unsigned long long)arg1;
- (void)setBezeled:(BOOL)arg1;
- (void)setBordered:(BOOL)arg1;
- (void)setInterlineSpacing:(double)arg1;
- (void)setEntryWidth:(double)arg1;
- (long long)indexOfSelectedItem;
- (void)sizeToFit;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)calcSize;
- (void)_resetTitleWidths;
- (double)_maxWidth;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end

