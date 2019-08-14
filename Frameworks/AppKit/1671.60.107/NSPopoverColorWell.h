//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSColorWell.h>

#import <AppKit/NSPopoverDelegate-Protocol.h>

@class NSButton, NSString, _NSDrawingHandlerView;

@interface NSPopoverColorWell : NSColorWell <NSPopoverDelegate>
{
    CDUnknownBlockType _afterRenderer;
    BOOL _rendersUsingSubviews;
    NSButton *_button;
    _NSDrawingHandlerView *_colorRenderer;
    struct {
        unsigned int _noSelection:1;
        unsigned int _emptyColor:1;
        unsigned int _emptyEnabled:1;
        unsigned int _controlSize:2;
        unsigned int _reserved:27;
    } _flags;
}

+ (id)nullColor;
+ (id)emptyColor;
+ (void)drawNoColorSwatchInRect:(struct CGRect)arg1 enabled:(BOOL)arg2 active:(BOOL)arg3;
+ (void)drawEmptyColorSwatchInRect:(struct CGRect)arg1 enabled:(BOOL)arg2;
+ (id)_colorPopoverCreateIfNecessary:(BOOL)arg1;
+ (id)_bezelRenderingButton;
@property(copy) CDUnknownBlockType afterRenderer; // @synthesize afterRenderer=_afterRenderer;
- (BOOL)isOpaque;
- (void)setColor:(id)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
@property BOOL hasNoSelection;
- (void)performClick:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_shouldOrderFront;
- (void)popoverWillClose:(id)arg1;
- (void)_showPopover;
- (BOOL)drawColor;
- (BOOL)_drawColor:(BOOL)arg1;
- (struct NSEdgeInsets)_colorSwatchEdgeInsets;
- (void)_drawBorderInRect:(struct CGRect)arg1;
- (void)_windowChangedKeyState;
- (BOOL)_ownsColorPanelExclusively;
- (void)dealloc;
- (void)setColorMatrixColorList:(id)arg1;
- (void)setTopBarMatrixColorList:(id)arg1;
@property(getter=isEmptyColorEnabled) BOOL emptyColorEnabled; // @dynamic emptyColorEnabled;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)arg1;
- (BOOL)_hasExtra10_11BordersInToolbars;
- (struct CGSize)intrinsicContentSize;
- (struct NSEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)_commonInit;
- (id)_bezelRenderingButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

