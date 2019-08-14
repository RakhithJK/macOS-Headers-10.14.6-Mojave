//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, NSMutableDictionary, OAVReadState, OAXDrawingState, OAXTableStyleCache, PDPresentation;
@protocol TCCancelDelegate;

@interface PXPresentationState : OCXReadState
{
    NSMutableDictionary *mModelObjects;
    OAXDrawingState *mOfficeArtState;
    OAVReadState *mOAVState;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mSlideURLToIndexMap;
    PDPresentation *mTgtPresentation;
    id <TCCancelDelegate> mCancel;
    CXNamespace *mPXPresentationMLNamespace;
    NSMutableDictionary *mCommentAuthorIdToIndexMap;
}

+ (void)setPptChartGraphicPropertyDefaultBlock:(id)arg1;
@property(retain, nonatomic) CXNamespace *PXPresentationMLNamespace; // @synthesize PXPresentationMLNamespace=mPXPresentationMLNamespace;
@property(readonly, nonatomic) NSMutableDictionary *commentAuthorIdToIndexMap; // @synthesize commentAuthorIdToIndexMap=mCommentAuthorIdToIndexMap;
@property(retain, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancel;
- (void).cxx_destruct;
- (void)setupNSForXMLFormat:(int)arg1;
- (BOOL)isCancelled;
- (void)setTgtPresentation:(id)arg1;
- (id)tgtPresentation;
- (void)setSlideIndex:(long long)arg1 forSlideURL:(id)arg2;
- (long long)slideIndexForSlideURL:(id)arg1;
- (id)tableStyleCache;
- (void)resetOfficeArtState;
- (id)officeArtState;
- (void)setModelObject:(id)arg1 forLocation:(id)arg2;
- (id)modelObjectForLocation:(id)arg1;
- (id)oavState;
- (id)init;

@end

