//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXBarSpec.h>

@class NSDictionary, NSSet;

@interface PXPhotosDetailsBarSpec : PXBarSpec
{
    NSDictionary *_sortPriorityByBarItemIdentifierByPlacement;
    NSSet *_includedBarItemIdentifiers;
    BOOL _shouldPlaceEditActionsInToolbar;
    unsigned long long _detailsOptions;
}

@property(nonatomic) unsigned long long detailsOptions; // @synthesize detailsOptions=_detailsOptions;
- (void).cxx_destruct;
- (id)sortedBarItemsByPlacement:(id)arg1;
- (BOOL)_shouldIncludeItem:(id)arg1;
- (id)_placementForBarItem:(id)arg1;
- (id)_sortPriorityForBarItem:(id)arg1 placement:(id)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1;

@end

