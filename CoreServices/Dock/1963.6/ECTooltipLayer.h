//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class ECTextLayer, _TtC4Dock28RoundBackdropLayerController;

@interface ECTooltipLayer : CALayer
{
    _TtC4Dock28RoundBackdropLayerController *_backdropLayerController;
    ECTextLayer *_textLayer;
    float _scaleFactor;
}

@property(readonly, nonatomic) ECTextLayer *textLayer; // @synthesize textLayer=_textLayer;
- (void).cxx_destruct;
- (void)layout;
@property(readonly, nonatomic) struct CGSize preferredSize; // @dynamic preferredSize;
- (id)initWithString:(id)arg1 scaleFactor:(float)arg2 material:(unsigned long long)arg3;

@end

