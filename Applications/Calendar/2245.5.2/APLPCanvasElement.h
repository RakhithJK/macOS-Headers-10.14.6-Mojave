//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "APLPLayoutElement.h"

@class CALCanvas, CALCanvasGroup;

@interface APLPCanvasElement : APLPLayoutElement
{
    CALCanvas *canvas;
    CALCanvasGroup *rootGroup;
    struct CGContext *ctx;
}

- (void).cxx_destruct;
- (void)draw;

@end
