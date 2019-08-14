//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSImage, NSURL;

@interface NSPathComponentCell : NSTextFieldCell
{
    NSImage *_image;
    double _fullWidth;
    double _resizedWidth;
    double _currentWidth;
    NSURL *_url;
    struct {
        unsigned int shouldDrawArrow:1;
        unsigned int drawsAsNavigationBar:1;
        unsigned int isFirstItem:1;
        unsigned int isLastItem:1;
        unsigned int isDropTarget:1;
        unsigned int reserved:27;
    } _flags;
    NSImage *_originalImage;
}

+ (struct CGSize)_iconSizeForControlSize:(unsigned long long)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1 imageRect:(struct CGRect)arg2;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)_interiorContentValueStateInView:(id)arg1;
- (unsigned long long)_interiorContentAppearanceInView:(id)arg1;
- (BOOL)_shouldDrawHighlightRect;
- (BOOL)_shouldStyleUneditableTextInView:(id)arg1;
- (int)_effectiveArrowBackgroundStyleInView:(id)arg1;
- (int)_effectiveBackgroundStyleInView:(id)arg1 isTemplate:(BOOL)arg2;
- (long long)interiorBackgroundStyle;
- (BOOL)_shouldDrawRTL;
- (BOOL)_shouldHighlightDropTarget;
- (BOOL)_textDimsWhenDisabled;
- (struct CGSize)_iconSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawNavigationBarBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_setCurrentWidth:(double)arg1;
- (double)_currentWidth;
- (void)_setResizedWidth:(double)arg1;
- (double)_resizedWidth;
- (long long)_compareToCell:(id)arg1;
- (double)_minWidth;
- (void)setFont:(id)arg1;
- (double)_fullWidth;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (double)_overlapAmount;
- (id)_textAttributes;
- (void)_setShouldDrawArrowYes;
- (void)_setShouldDrawArrow:(BOOL)arg1;
- (BOOL)_shouldDrawArrow;
- (void)_setIsLastItem:(BOOL)arg1;
- (BOOL)_isLastItem;
- (void)_setIsFirstItem:(BOOL)arg1;
- (BOOL)_isFirstItem;
- (void)_setDrawsAsNavigationBar:(BOOL)arg1;
- (BOOL)_drawsAsNavigationBar;
- (void)setBaseWritingDirection:(long long)arg1;
@property(copy) NSURL *URL;
@property(retain) NSImage *image;
- (void)_setIsDropTarget:(BOOL)arg1;
- (BOOL)_isDropTarget;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;

@end

