//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIKeyboardCandidateToggleButton.h>

@class UIKeyboardCandidatePocketShadow;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton
{
    UIKeyboardCandidatePocketShadow *_pocketShadow;
    BOOL _drawsBackground;
    BOOL _drawsPocketShadow;
}

@property(nonatomic) BOOL drawsPocketShadow; // @synthesize drawsPocketShadow=_drawsPocketShadow;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
- (void).cxx_destruct;
- (void)dimKeys:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

