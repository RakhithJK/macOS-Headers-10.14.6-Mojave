//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@interface AKBezelFreeButton_Mac : NSButton
{
    BOOL _allowsDrags;
    BOOL _isInTrackingLoop;
    BOOL _isDragging;
}

+ (Class)cellClass;
@property BOOL isDragging; // @synthesize isDragging=_isDragging;
@property BOOL isInTrackingLoop; // @synthesize isInTrackingLoop=_isInTrackingLoop;
@property BOOL allowsDrags; // @synthesize allowsDrags=_allowsDrags;
- (id)makeBackingLayer;
- (BOOL)allowsVibrancy;
- (void)draggingEndedNotification:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)_commonInit;

@end

