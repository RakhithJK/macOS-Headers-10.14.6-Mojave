//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICMAttachmentNonBrickCollectionItemView.h"

@class ICLabel, NSControl;

@interface ICMAttachmentImageAndVideoCollectionItemView : ICMAttachmentNonBrickCollectionItemView
{
    double _movieDuration;
    NSControl *_movieFooter;
    ICLabel *_movieDurationLabel;
}

@property(retain, nonatomic) ICLabel *movieDurationLabel; // @synthesize movieDurationLabel=_movieDurationLabel;
@property(retain, nonatomic) NSControl *movieFooter; // @synthesize movieFooter=_movieFooter;
@property(nonatomic) double movieDuration; // @synthesize movieDuration=_movieDuration;
- (void).cxx_destruct;
- (void)itemDidFinishPlaying:(id)arg1;
- (void)startPlaying:(id)arg1;
- (void)updateDurationLabel;
- (void)addSubview:(id)arg1;
- (void)setupMovieFooter;
- (id)cameraImage;
- (id)gradientImage;
- (void)prepareForReuse;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

