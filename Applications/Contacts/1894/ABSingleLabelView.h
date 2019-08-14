//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSCopying-Protocol.h"

@class ABPrintInfo, NSDictionary, NSLayoutManager, NSTextContainer, NSTextStorage;

@interface ABSingleLabelView : NSView <NSCopying>
{
    NSDictionary *_address;
    ABPrintInfo *_labelDesc;
    struct CGRect _labelRect;
    struct CGRect _imageRect;
    NSTextStorage *_storage;
    NSLayoutManager *_layout;
    NSTextContainer *_container;
    long long _glyphCount;
    BOOL _isPreview;
    BOOL _drawImage;
}

- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setLabelDescription:(id)arg1;
- (void)setAddress:(id)arg1;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (void)revert:(id)arg1;
- (id)addressStringForDictionary:(id)arg1;
- (void)setDrawImage:(BOOL)arg1;
- (void)setIsPreview:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

