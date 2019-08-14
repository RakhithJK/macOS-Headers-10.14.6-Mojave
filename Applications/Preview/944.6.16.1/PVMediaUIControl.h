//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface PVMediaUIControl : NSView
{
    id _target;
    SEL _action;
    long long _tag;
    unsigned int _enabled:1;
    unsigned int _highlighted:1;
    unsigned int _tracking:1;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
@property(nonatomic, getter=isTracking) BOOL tracking;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(nonatomic) long long tag;
@property(nonatomic) __weak id target;
@property(nonatomic) SEL action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end

