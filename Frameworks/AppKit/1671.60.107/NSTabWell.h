//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSRulerMarker;

__attribute__((visibility("hidden")))
@interface NSTabWell : NSView
{
    NSRulerMarker *_prototype;
    BOOL _disabled;
}

+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (id)prototype;
- (void)setPrototype:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 prototypeRulerMarker:(id)arg2;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsMarkerTypeDescriptionAttributeSettable;
- (id)accessibilityMarkerTypeDescriptionAttribute;
- (BOOL)accessibilityIsMarkerTypeAttributeSettable;
- (id)accessibilityMarkerTypeAttribute;
- (id)accessibilityAttributeNames;

@end

