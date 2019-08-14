//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaToolbox/FigBaseCALayer.h>

#import <MediaToolbox/CALayerDelegate-Protocol.h>

@class FigCaptionLayerPrivate, NSString;

@interface FigCaptionLayer : FigBaseCALayer <CALayerDelegate>
{
    FigCaptionLayerPrivate *_priv;
}

- (void)updateDisplay:(struct OpaqueFigCFCaptionRenderer *)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayers;
- (void)processCaptionCommand:(unsigned int)arg1 data:(id)arg2;
- (void)resetCaptions;
- (void)dealloc;
- (void)finalize;
- (void)setFontName:(const char *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

