//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSMutableString, NSString, NSView, TypeAheadView;

@interface TypeAheadController : NSObject
{
    NSView *_parentView;
    TypeAheadView *_taView;
    BOOL _visible;
    BOOL _starting;
    NSMutableString *_matchString;
    NSString *_matchCountFormatString;
}

@property(retain, nonatomic) NSString *matchCountFormatString; // @synthesize matchCountFormatString=_matchCountFormatString;
@property(readonly, nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) NSString *matchString; // @synthesize matchString=_matchString;
- (id)filterCells:(id)arg1;
- (void)dismiss;
- (void)_createOverlay;
- (BOOL)handleEvent:(id)arg1;
- (void)dealloc;
- (id)initDisplayingBelowView:(id)arg1;

@end

