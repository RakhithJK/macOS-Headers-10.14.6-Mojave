//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDraggingInfo-Protocol.h>

@class NSString, _UIInternalDraggingSessionSource;
@protocol _UIDraggingSessionDelegate;

@interface _UIDraggingSession : NSObject <_UIDraggingInfo>
{
    id <_UIDraggingSessionDelegate> _delegate;
    _UIInternalDraggingSessionSource *_internalSessionSource;
}

+ (void)_cancelAllDrags;
@property(readonly, nonatomic, getter=_internalSessionSource) __weak _UIInternalDraggingSessionSource *internalSessionSource; // @synthesize internalSessionSource=_internalSessionSource;
@property(nonatomic) __weak id <_UIDraggingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_dynamicallyUpdatesPrefersFullSizePreviewss;
- (BOOL)prefersFullSizePreview;
- (void)_sendDataTransferFinished;
- (void)_sendDidMove;
- (void)_sendDidEndWithOperation:(unsigned long long)arg1;
- (void)_sendWillEndWithOperation:(unsigned long long)arg1;
- (void)_sendWillAddItems:(id)arg1;
- (void)_sendHandedOffDragImageForItem:(id)arg1;
- (void)_sendHandedOffDragImage;
- (void)_sendWillBegin;
- (void)_cancelDrag;
- (BOOL)_shouldCancelOnAppDeactivation;
- (void)_getOperationMaskFromDelegateInApp:(unsigned long long *)arg1 outsideApp:(unsigned long long *)arg2;
@property(readonly, nonatomic) _UIDraggingSession *localDraggingSession;
@property(nonatomic) long long numberOfValidItemsForDrop;
@property(readonly, nonatomic) unsigned long long draggingSourceOperationMask;
- (struct CGPoint)draggingLocationInCoordinateSpace:(id)arg1;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 acceptableTypeIdentifiers:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)addItems:(id)arg1;
- (id)init;
- (id)initWithInternalSessionSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

