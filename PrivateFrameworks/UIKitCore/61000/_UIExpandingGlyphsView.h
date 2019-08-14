//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSString;

@interface _UIExpandingGlyphsView : UIView <CAAnimationDelegate>
{
    BOOL _expandsFromLeftToRight;
    BOOL _fadesOut;
    int _remainingAnimationCount;
    NSAttributedString *_attributedString;
    double _baselineOffset;
    NSArray *_imageViews;
    CDUnknownBlockType _completionBlock;
    struct CGSize _intrinsicSize;
}

@property(nonatomic) struct CGSize intrinsicSize; // @synthesize intrinsicSize=_intrinsicSize;
@property(nonatomic) int remainingAnimationCount; // @synthesize remainingAnimationCount=_remainingAnimationCount;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) BOOL fadesOut; // @synthesize fadesOut=_fadesOut;
@property(nonatomic) BOOL expandsFromLeftToRight; // @synthesize expandsFromLeftToRight=_expandsFromLeftToRight;
@property(readonly, nonatomic) double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)animateCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

