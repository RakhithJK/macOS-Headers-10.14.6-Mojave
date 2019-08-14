//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class TIKeyboardCandidate, UILabel, UIMorphingLabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardPredictionCell : UIView
{
    UIMorphingLabel *m_label;
    UILabel *m_suggestionLabel;
    UIView *m_maskView;
    UIView *m_activeView;
    BOOL m_lightKeyboard;
    double m_maskViewMargin;
    BOOL _active;
    BOOL _isAutocorrection;
    BOOL _isTypedString;
    BOOL _isLongCandidate;
    BOOL _isEmoji;
    unsigned int _slotID;
    TIKeyboardCandidate *_prediction;
    UIView *_leftSeperatorView;
    UIView *_rightSeperatorView;
    long long _candidateType;
    long long _state;
}

+ (double)fontSizeForSingleLineLayout;
+ (double)predictionCellTopPadding;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) BOOL isEmoji; // @synthesize isEmoji=_isEmoji;
@property(nonatomic) long long candidateType; // @synthesize candidateType=_candidateType;
@property(nonatomic) unsigned int slotID; // @synthesize slotID=_slotID;
@property(nonatomic) BOOL isLongCandidate; // @synthesize isLongCandidate=_isLongCandidate;
@property(nonatomic) BOOL isTypedString; // @synthesize isTypedString=_isTypedString;
@property(nonatomic) BOOL isAutocorrection; // @synthesize isAutocorrection=_isAutocorrection;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(retain, nonatomic) UIView *rightSeperatorView; // @synthesize rightSeperatorView=_rightSeperatorView;
@property(retain, nonatomic) UIView *leftSeperatorView; // @synthesize leftSeperatorView=_leftSeperatorView;
@property(readonly, retain, nonatomic) TIKeyboardCandidate *prediction; // @synthesize prediction=_prediction;
- (BOOL)needsUpdateForRenderConfig:(id)arg1;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (id)label;
- (void)setText:(id)arg1 prediction:(id)arg2 active:(BOOL)arg3 isEmoji:(BOOL)arg4;
- (BOOL)shouldDisplayHeaderForPrediction:(id)arg1;
- (BOOL)shouldDisplayAsSuggestion:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setActive:(BOOL)arg1 withAttrText:(id)arg2;
- (void)setActive:(BOOL)arg1 withText:(id)arg2;
- (void)setCellAttributes;
- (id)textColor;
- (void)scrollLabelWithText:(id)arg1 force:(BOOL)arg2;
- (void)touchMoved:(double)arg1;
- (void)setVisibleRect;
- (struct CGRect)visibleRect;
- (void)dimKeys:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

