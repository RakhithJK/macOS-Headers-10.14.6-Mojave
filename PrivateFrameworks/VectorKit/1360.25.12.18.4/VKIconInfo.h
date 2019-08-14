//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VKImage;

@interface VKIconInfo : NSObject
{
    unsigned char _style;
    float _alpha;
    float _strokeWeight;
    VKImage *_image;
    struct CGColor *_fillColor;
    struct CGColor *_haloColor;
    struct CGColor *_glyphColor;
    struct CGColor *_fullBleedColor;
}

@property(nonatomic) float strokeWeight; // @synthesize strokeWeight=_strokeWeight;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CGColor *fullBleedColor; // @synthesize fullBleedColor=_fullBleedColor;
@property(nonatomic) struct CGColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(nonatomic) struct CGColor *haloColor; // @synthesize haloColor=_haloColor;
@property(nonatomic) struct CGColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) unsigned char style; // @synthesize style=_style;
@property(retain, nonatomic) VKImage *image; // @synthesize image=_image;
- (void)dealloc;

@end

