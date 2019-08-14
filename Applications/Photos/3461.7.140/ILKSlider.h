//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSlider.h>

@class NSMapTable;

@interface ILKSlider : NSSlider
{
    NSMapTable *_valueObserverMapTable;
    BOOL _mouseInside;
    CDUnknownBlockType _onMouseDown;
    CDUnknownBlockType _onMouseUp;
    CDUnknownBlockType _onTouchesBegan;
    CDUnknownBlockType _onTouchesCancelled;
    CDUnknownBlockType _onTouchesEnded;
}

+ (Class)cellClass;
@property(copy, nonatomic) CDUnknownBlockType onTouchesEnded; // @synthesize onTouchesEnded=_onTouchesEnded;
@property(copy, nonatomic) CDUnknownBlockType onTouchesCancelled; // @synthesize onTouchesCancelled=_onTouchesCancelled;
@property(copy, nonatomic) CDUnknownBlockType onTouchesBegan; // @synthesize onTouchesBegan=_onTouchesBegan;
@property(copy, nonatomic) CDUnknownBlockType onMouseUp; // @synthesize onMouseUp=_onMouseUp;
@property(copy, nonatomic) CDUnknownBlockType onMouseDown; // @synthesize onMouseDown=_onMouseDown;
@property(readonly) BOOL mouseInside; // @synthesize mouseInside=_mouseInside;
- (void).cxx_destruct;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)setDoubleValue:(double)arg1;
- (void)setFloatValue:(float)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setIntValue:(int)arg1;
- (void)setObjectValue:(id)arg1;
- (void)_notifyValueObservers;
- (void)removeValueObserver:(id)arg1;
- (void)addValueObserver:(id)arg1 withAction:(SEL)arg2;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)resetToDefault;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_ilkCommonSetup;
- (struct CGSize)intrinsicContentSize;

@end

