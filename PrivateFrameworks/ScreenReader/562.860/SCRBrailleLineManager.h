//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, SCRElement;

__attribute__((visibility("hidden")))
@interface SCRBrailleLineManager : NSObject
{
    SCRElement *_containerElement;
    struct __CFArray *_orderedLine;
    struct __CFDictionary *_uiElementToElementDict;
    long long _focusedElementIndex;
    BOOL _focusThrough;
    BOOL _lineNeedsRefresh;
    NSSet *_retainedElements;
    int _lineFocus;
}

+ (id)simpleBrailleRequestForElement:(id)arg1 hasBrailleFocus:(BOOL)arg2;
@property(nonatomic) int lineFocus; // @synthesize lineFocus=_lineFocus;
@property(nonatomic) BOOL focusThrough; // @synthesize focusThrough=_focusThrough;
- (void)setBrailleLineNeedsRebuild;
- (BOOL)brailleLineNeedsRefresh;
- (BOOL)isLineEmpty;
- (BOOL)isLineValid;
- (BOOL)isLineEqualToUIElements:(id)arg1;
- (id)elementForUIElement:(id)arg1;
- (BOOL)doesLineContainElement:(id)arg1;
- (void)setLineFocus:(int)arg1 forElement:(id)arg2 andPrepareBrailleItemDescriptionForRequest:(id)arg3 hasBrailleFocus:(BOOL)arg4;
- (id)brailleLineRequest;
- (void)sendBrailleLineRequest;
- (id)_deepestFocusedThroughElement;
@property(nonatomic) SCRElement *focusedElement; // @dynamic focusedElement;
- (void)setLine:(id)arg1 withFocusedElement:(id)arg2 retainedElements:(id)arg3;
- (void)dealloc;
- (id)initWithContainerElement:(id)arg1;

@end

