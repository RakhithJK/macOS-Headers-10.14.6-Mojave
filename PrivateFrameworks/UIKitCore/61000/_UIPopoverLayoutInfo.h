//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : NSObject <NSCopying>
{
    struct UIEdgeInsets _contentInset;
    double _arrowHeight;
    double _arrowOffset;
    struct CGSize _preferredContentSize;
    unsigned long long _preferredArrowDirections;
    struct CGRect _containingFrame;
    struct UIEdgeInsets _containingFrameInsets;
    struct CGRect _sourceViewRect;
    BOOL _canOverlapSourceViewRect;
    struct CGRect _frame;
    double _offset;
    unsigned long long _arrowDirection;
    BOOL _preferLandscapeOrientations;
    BOOL _updatesEnabled;
    NSMutableArray *_candidates;
}

+ (id)_observationKeys;
@property(nonatomic) BOOL preferLandscapeOrientations; // @synthesize preferLandscapeOrientations=_preferLandscapeOrientations;
@property(nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled; // @synthesize updatesEnabled=_updatesEnabled;
@property(readonly, nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) BOOL canOverlapSourceViewRect; // @synthesize canOverlapSourceViewRect=_canOverlapSourceViewRect;
@property(nonatomic) struct CGRect sourceViewRect; // @synthesize sourceViewRect=_sourceViewRect;
@property(nonatomic) struct UIEdgeInsets containingFrameInsets; // @synthesize containingFrameInsets=_containingFrameInsets;
@property(nonatomic) struct CGRect containingFrame; // @synthesize containingFrame=_containingFrame;
@property(nonatomic) unsigned long long preferredArrowDirections; // @synthesize preferredArrowDirections=_preferredArrowDirections;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateOutputs;
- (struct CGSize)_popoverViewSizeForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned long long)arg2;
- (id)candidates;
- (void)updateProperties:(CDUnknownBlockType)arg1;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

