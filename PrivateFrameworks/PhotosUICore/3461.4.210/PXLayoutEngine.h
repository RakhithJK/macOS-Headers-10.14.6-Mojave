//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXMutableLayoutEngine-Protocol.h>

@class NSString, PXLayoutGenerator, PXLayoutSnapshot;
@protocol OS_dispatch_queue, PXLayoutDataSourceChangeDetails, PXLayoutEngineDataSourceSnapshot, PXLayoutEngineDelegate, PXLayoutItem;

@interface PXLayoutEngine : NSObject <PXMutableLayoutEngine>
{
    NSObject<OS_dispatch_queue> *_internalWorkQueue;
    struct {
        char layoutData;
        char layoutSnapshot;
    } _needsUpdateFlags;
    id <PXLayoutEngineDelegate> _delegate;
    PXLayoutSnapshot *_layoutSnapshot;
    id <PXLayoutEngineDataSourceSnapshot> _dataSourceSnapshot;
    id <PXLayoutItem> _seedItem;
    PXLayoutGenerator *_layoutGenerator;
    id <PXLayoutDataSourceChangeDetails> _changeDetails;
}

@property(retain, nonatomic) id <PXLayoutDataSourceChangeDetails> changeDetails; // @synthesize changeDetails=_changeDetails;
@property(retain, nonatomic) PXLayoutGenerator *layoutGenerator; // @synthesize layoutGenerator=_layoutGenerator;
@property(readonly, nonatomic) id <PXLayoutItem> seedItem; // @synthesize seedItem=_seedItem;
@property(readonly, nonatomic) id <PXLayoutEngineDataSourceSnapshot> dataSourceSnapshot; // @synthesize dataSourceSnapshot=_dataSourceSnapshot;
@property(retain, nonatomic) PXLayoutSnapshot *layoutSnapshot; // @synthesize layoutSnapshot=_layoutSnapshot;
@property(nonatomic) __weak id <PXLayoutEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)computeLayoutSnapshot;
- (void)updateLayoutDataWithChangeDetails:(id)arg1;
- (BOOL)canComputeLayoutSnapshot;
- (void)_publishChanges;
- (void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;
- (void)setDataSourceSnapshot:(id)arg1;
- (void)setSeedItem:(id)arg1;
- (void)_updateLayoutDataIfNeeded;
- (void)invalidateLayoutData;
- (void)_updateLayoutSnapshotIfNeeded;
- (void)invalidateLayoutSnapshot;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (BOOL)_needsUpdate;
- (id)performChangesAndWait:(CDUnknownBlockType)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)initWithLayoutGenerator:(id)arg1 dataSourceSnapshot:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

