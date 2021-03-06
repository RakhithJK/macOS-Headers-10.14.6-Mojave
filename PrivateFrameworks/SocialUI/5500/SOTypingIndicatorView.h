//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSString;
@protocol IMTypingIndicatorLayerProtocol;

@interface SOTypingIndicatorView : NSView
{
    BOOL _hasDarkBackground;
    BOOL _flipForRTLLayout;
    BOOL _isDarkAqua;
    CALayer<IMTypingIndicatorLayerProtocol> *_typingLayer;
    NSString *_balloonPlugInBundleID;
}

@property(nonatomic) BOOL isDarkAqua; // @synthesize isDarkAqua=_isDarkAqua;
@property(copy, nonatomic) NSString *balloonPlugInBundleID; // @synthesize balloonPlugInBundleID=_balloonPlugInBundleID;
@property(nonatomic) BOOL flipForRTLLayout; // @synthesize flipForRTLLayout=_flipForRTLLayout;
@property(nonatomic) BOOL hasDarkBackground; // @synthesize hasDarkBackground=_hasDarkBackground;
- (void).cxx_destruct;
- (void)resetTypingLayer;
- (void)updateLayer;
- (void)viewDidChangeBackingProperties:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_updateTypingLayerTransform;
- (void)_updatePlugInImage;
- (void)_commonSOTypingIndicatorViewInit;
- (void)stopAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startPulseAnimation;
- (void)startGrowAnimation;
- (void)destroyTypingLayer;
@property(retain, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *typingLayer; // @synthesize typingLayer=_typingLayer;

@end

