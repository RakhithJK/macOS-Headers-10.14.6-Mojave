//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewDropCoordinator-Protocol.h>

@class NSIndexPath, NSString, UICollectionViewDropProposal, UIDragItem, UIDragPreviewTarget;
@protocol UIDropSession, _UICollectionViewDropPlaceholderContext;

@protocol _UICollectionViewDropCoordinator <UICollectionViewDropCoordinator>
@property(readonly, nonatomic) id <UIDropSession> dropSession;
@property(readonly, nonatomic) UICollectionViewDropProposal *dropProposal;
- (void)dropToTarget:(UIDragPreviewTarget *)arg1 forDragItem:(UIDragItem *)arg2;
- (id <_UICollectionViewDropPlaceholderContext>)dropToPlaceholderInsertedAtIndexPath:(NSIndexPath *)arg1 reuseIdentifier:(NSString *)arg2 forDragItem:(UIDragItem *)arg3 cellUpdateHandler:(void (^)(UICollectionViewCell *))arg4;
- (void)dropToItemAtIndexPath:(NSIndexPath *)arg1 forDragItem:(UIDragItem *)arg2;
@end

