//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDocumentSectionManager-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NFMultiDelegate, NSMutableDictionary, NSMutableSet, NSString, SXViewport;
@protocol SXDocumentSectionHosting;

@interface SXDocumentSectionManager : NSObject <SXViewportChangeListener, SXDocumentSectionManager>
{
    id <SXDocumentSectionHosting> _hosting;
    SXViewport *_viewport;
    NSMutableDictionary *_blueprints;
    NSMutableSet *_visibleViewControllers;
    NFMultiDelegate *_multiScrollDelegate;
}

@property(readonly, nonatomic) NFMultiDelegate *multiScrollDelegate; // @synthesize multiScrollDelegate=_multiScrollDelegate;
@property(readonly, nonatomic) NSMutableSet *visibleViewControllers; // @synthesize visibleViewControllers=_visibleViewControllers;
@property(readonly, nonatomic) NSMutableDictionary *blueprints; // @synthesize blueprints=_blueprints;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) __weak id <SXDocumentSectionHosting> hosting; // @synthesize hosting=_hosting;
- (void).cxx_destruct;
- (id)view;
- (id)viewController;
- (double)heightForBlueprint:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
- (void)endImpressions;
- (void)updateViewControllerVisibility;
- (void)viewport:(id)arg1 documentSizeDidChangeFromSize:(struct CGSize)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)applySectionBlueprint:(id)arg1 identifier:(id)arg2 offset:(struct CGPoint)arg3 width:(double)arg4;
- (id)initWithSectionHosting:(id)arg1 viewport:(id)arg2 appStateMonitor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
