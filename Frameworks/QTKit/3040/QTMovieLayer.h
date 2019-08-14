//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class QTMovieLayerPrivate;

@interface QTMovieLayer : CALayer
{
    QTMovieLayerPrivate *_movieLayerPriv;
}

+ (id)layerWithMovie:(id)arg1;
- (void)layerDidChangeDisplay:(unsigned int)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)layoutSublayers;
- (void)_qtMovieClosedCaptionVisibilityDidChange:(id)arg1;
- (void)_qtMovieSubtitleVisibilityDidChange:(id)arg1;
- (void)_qtMovieClosedCaptionDidChange:(id)arg1;
- (void)_qtMovieSubtitleDidChange:(id)arg1;
- (id)movie;
- (void)setMovie:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)tearDown;
- (id)init;
- (id)initWithMovie:(id)arg1;

@end

