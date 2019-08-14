//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TUpdateLayerView.h"

#import "NSAccessibilityImage-Protocol.h"

@class NSImage, NSString;

@interface TBasicImageView : TUpdateLayerView <NSAccessibilityImage>
{
    struct TNSRef<NSImage, void> _imageForDrawing;
    struct TNSRef<NSImage, void> _imageForComparison;
    _Bool _isDimmed;
    struct TNSRef<NSArray<CAFilter *>, void> _dimmedFilters;
    _Bool _acceptsFirstMouse;
    struct TriStateBool _animatingFrameSizeLarger;
    unsigned long long _animatingFrameSizeCount;
}

@property _Bool acceptsFirstMouse; // @synthesize acceptsFirstMouse=_acceptsFirstMouse;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_isDimmed;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityEnabled;
- (id)accessibilityLabel;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (id)dimmedFilters;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrBoundsSizeHelper:(const struct CGSize *)arg1 oldSize:(const struct CGSize *)arg2 sizeChangerBlock:(const function_96ce23bb *)arg3;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (_Bool)intersectsOpaquePixels:(const struct CGRect *)arg1;
- (_Bool)pointInOpaquePixels:(const struct CGPoint *)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)viewDidChangeBackingProperties;
- (void)updateImageSize:(const struct CGSize *)arg1 forceRedraw:(_Bool)arg2;
@property(retain, nonatomic) NSImage *image; // @dynamic image;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

