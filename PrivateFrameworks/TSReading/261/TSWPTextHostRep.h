//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSDRep.h>

#import <TSReading/TSDContainerRep-Protocol.h>
#import <TSReading/TSKHighlightArrayControllerProtocol-Protocol.h>
#import <TSReading/TSWPTextEditingHostRep-Protocol.h>

@class NSArray, NSObject, NSString, TSKHighlightArrayController, TSWPShapeRep;
@protocol TSDContainerInfo, TSKSearchReference;

@interface TSWPTextHostRep : TSDRep <TSDContainerRep, TSWPTextEditingHostRep, TSKHighlightArrayControllerProtocol>
{
    TSWPShapeRep *_editingRep;
    TSKHighlightArrayController *_pulseArrayController;
    TSKHighlightArrayController *_highlightArrayController;
    NSObject<TSKSearchReference> *_activeSearchReference;
    NSArray *_searchReferences;
}

@property(retain, nonatomic) NSArray *searchReferences; // @synthesize searchReferences=_searchReferences;
@property(retain, nonatomic) NSObject<TSKSearchReference> *activeSearchReference; // @synthesize activeSearchReference=_activeSearchReference;
@property(retain, nonatomic) TSKHighlightArrayController *highlightArrayController; // @synthesize highlightArrayController=_highlightArrayController;
@property(retain, nonatomic) TSKHighlightArrayController *pulseArrayController; // @synthesize pulseArrayController=_pulseArrayController;
- (void)drawTextBackground:(struct CGContext *)arg1 insetRect:(struct CGRect)arg2 pulsating:(BOOL)arg3;
- (id)overlayLayers;
@property(readonly, nonatomic) BOOL useFindOverlayers;
- (void)updateHighlights;
- (id)lineSearchReferencesForSearchReference:(id)arg1;
- (void)updateFindAnimationWithAnimatingPulse:(BOOL)arg1;
- (void)p_setSearchReferencesToHighlight:(id)arg1;
- (void)p_findUIStateChangedNotification:(id)arg1;
- (void)p_setActiveSearchReference:(id)arg1;
- (void)p_activeFindHighlightChangedNotification:(id)arg1;
- (BOOL)doesRepContainSearchReference:(id)arg1;
- (void)pulseAnimationDidStop:(id)arg1;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(BOOL)arg3;
- (struct CGPath *)newPathForSearchReference:(id)arg1;
- (void)setPulseControllerActive:(BOOL)arg1 autohide:(BOOL)arg2;
- (void)tswpTextEditingDidEndEditing:(id)arg1;
- (void)selectChildRep:(id)arg1;
- (BOOL)canSelectChildRep:(id)arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)childReps;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (id)hitRep:(struct CGPoint)arg1;
- (void)updateChildrenFromLayout;
- (void)willBeRemoved;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

