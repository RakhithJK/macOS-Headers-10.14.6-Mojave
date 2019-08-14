//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSImageCell.h>

@class NSString, NSTextFieldCell;

@interface MessageListCell : NSImageCell
{
    NSTextFieldCell *_textCell;
    NSString *_stringValue;
    double _maxHeight;
    double _maxWidth;
    long long _contentType;
    unsigned long long _contentCount;
}

@property(nonatomic) unsigned long long contentCount; // @synthesize contentCount=_contentCount;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (struct _NSRange)accessibilitySelectedTextRange;
- (id)accessibilitySelectedText;
- (long long)accessibilityNumberOfCharacters;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (BOOL)isRepresentedAsButton;
- (BOOL)isRepresentedAsStaticText;
- (id)contentValue;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (void)setObjectValue:(id)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGPoint)_drawOriginForSize:(struct CGSize)arg1 inRect:(struct CGRect)arg2;
- (struct CGSize)_imageSizeForCellFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)_textCell;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

