//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SilexText/NSObject-Protocol.h>
#import <SilexText/TSDInfoUsingObjectPlaceholderGeometry-Protocol.h>
#import <SilexText/TSKModel-Protocol.h>
#import <SilexText/TSPCopying-Protocol.h>

@class NSObject, TSDInfoGeometry, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@protocol TSDInfo <NSObject, TSKModel, TSPCopying, TSDInfoUsingObjectPlaceholderGeometry>
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (BOOL)isThemeContent;
- (Class)repClass;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(NSObject<TSDContainerInfo> *)arg1;
@end

