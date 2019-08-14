//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IMKUICandidateLayoutTraits, NSArray, NSMutableDictionary;

@interface IMKUICandidateGroupView : NSView
{
    NSArray *_items;
    NSMutableDictionary *_itemToViewMapping;
    IMKUICandidateLayoutTraits *_layoutTraits;
}

@property(retain, nonatomic) IMKUICandidateLayoutTraits *layoutTraits; // @synthesize layoutTraits=_layoutTraits;
@property(retain, nonatomic) NSMutableDictionary *itemToViewMapping; // @synthesize itemToViewMapping=_itemToViewMapping;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;

@end

