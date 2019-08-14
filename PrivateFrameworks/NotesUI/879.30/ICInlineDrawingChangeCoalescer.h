//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICAttachment, ICSelectorDelayer, PKDrawing;
@protocol OS_dispatch_queue;

@interface ICInlineDrawingChangeCoalescer : NSObject
{
    ICAttachment *_attachment;
    ICSelectorDelayer *_processChangesSelectorDelayer;
    PKDrawing *_latestDrawing;
    unsigned long long _numberOfChanges;
    NSObject<OS_dispatch_queue> *_mergeQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mergeQueue; // @synthesize mergeQueue=_mergeQueue;
@property(nonatomic) unsigned long long numberOfChanges; // @synthesize numberOfChanges=_numberOfChanges;
@property(retain, nonatomic) PKDrawing *latestDrawing; // @synthesize latestDrawing=_latestDrawing;
@property(retain, nonatomic) ICSelectorDelayer *processChangesSelectorDelayer; // @synthesize processChangesSelectorDelayer=_processChangesSelectorDelayer;
@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)processIndexableContent;
- (void)mergeDrawingWithDrawing:(id)arg1;
- (id)retrieveAndClearLatestDrawingToMerge;
- (void)mergeDrawingChanges;
- (void)updateNowIfNecessary;
- (void)drawingDataDidChange:(id)arg1;
- (BOOL)hasChanges;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1;

@end

