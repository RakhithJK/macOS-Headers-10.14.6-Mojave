//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@protocol _UIAtomTextViewAtomLayout;

__attribute__((visibility("hidden")))
@interface __UIAtomLayoutView : UIView
{
    UIView<_UIAtomTextViewAtomLayout> *_delegateView;
}

+ (id)layoutViewWithDelegateView:(id)arg1;
@property(retain, nonatomic) UIView<_UIAtomTextViewAtomLayout> *delegateView; // @synthesize delegateView=_delegateView;
- (void).cxx_destruct;
- (struct CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (struct CGRect)selectionBounds;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewForLastBaselineLayout;
@property(readonly, nonatomic) struct UIEdgeInsets atomInsets;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithDelegateView:(id)arg1;

@end

