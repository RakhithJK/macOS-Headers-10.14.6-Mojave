//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXSmartScaleView.h>

@class CAShapeLayer, NSDateFormatter, PXPersonImageRequest, UXImageView, UXLabel, UXView;
@protocol PXPerson;

@interface PXPeopleSuggestionView : PXSmartScaleView
{
    BOOL _needsSpotlightUpdate;
    BOOL _validSpotlight;
    id <PXPerson> _suggestion;
    UXImageView *_imageView;
    UXView *_suggestionView;
    UXView *_dimView;
    CAShapeLayer *_spotlightLayer;
    PXPersonImageRequest *_imageRequest;
    NSDateFormatter *_dateFormatter;
    UXLabel *_dateLabel;
    struct CGRect _faceRect;
}

@property(retain, nonatomic) UXLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) PXPersonImageRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
@property(nonatomic) BOOL validSpotlight; // @synthesize validSpotlight=_validSpotlight;
@property(nonatomic) BOOL needsSpotlightUpdate; // @synthesize needsSpotlightUpdate=_needsSpotlightUpdate;
@property(retain, nonatomic) CAShapeLayer *spotlightLayer; // @synthesize spotlightLayer=_spotlightLayer;
@property(retain, nonatomic) UXView *dimView; // @synthesize dimView=_dimView;
@property(retain, nonatomic) UXView *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(retain, nonatomic) UXImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(readonly, nonatomic) id <PXPerson> suggestion; // @synthesize suggestion=_suggestion;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)_faceScale;
- (struct CGRect)_scaledFaceRect;
- (void)_updateDateFieldWithSuggestion:(id)arg1;
- (void)_updateSpotlightAnimated:(BOOL)arg1;
- (void)_updateSuggestionImageWithAnimatedSpotlight:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setSuggestion:(id)arg1 animated:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)viewScaleDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)commonInit;

@end

