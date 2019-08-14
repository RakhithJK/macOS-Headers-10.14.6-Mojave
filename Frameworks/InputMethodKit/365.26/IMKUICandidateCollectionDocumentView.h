//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IMKUICandidateLayoutTraits;

@interface IMKUICandidateCollectionDocumentView : NSView
{
    IMKUICandidateLayoutTraits *_layoutTraits;
    BOOL _scrollsInLineIncrements;
    BOOL _usingRubberbanding;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
@property(getter=isUsingRubberbanding) BOOL usingRubberbanding; // @synthesize usingRubberbanding=_usingRubberbanding;
@property BOOL scrollsInLineIncrements; // @synthesize scrollsInLineIncrements=_scrollsInLineIncrements;
@property(retain) IMKUICandidateLayoutTraits *layoutTraits; // @synthesize layoutTraits=_layoutTraits;
- (void).cxx_destruct;
- (struct CGRect)adjustScroll:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

