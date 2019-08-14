//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/NSItemProviderReading-Protocol.h>
#import <PencilKit/NSItemProviderWriting-Protocol.h>

@class NSArray, NSImage, NSMutableOrderedSet, NSString, PKDrawing, PKStroke;

@interface PKStrokeSelection : NSObject <NSItemProviderReading, NSItemProviderWriting>
{
    NSMutableOrderedSet *_strokes;
    PKStroke *_lassoStroke;
    NSImage *_strokeImage;
    PKDrawing *_drawing;
}

+ (id)strokeSelectionFromData:(id)arg1;
@property(readonly, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) NSImage *strokeImage; // @synthesize strokeImage=_strokeImage;
@property(readonly, nonatomic) PKStroke *lassoStroke; // @synthesize lassoStroke=_lassoStroke;
@property(readonly, nonatomic) NSMutableOrderedSet *strokes; // @synthesize strokes=_strokes;
- (void).cxx_destruct;
- (id)strokeDataForSelection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)boundsWithoutLasso;
- (struct CGRect)bounds;
- (id)initWithStrokes:(id)arg1 lassoStroke:(id)arg2 drawing:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

@end

