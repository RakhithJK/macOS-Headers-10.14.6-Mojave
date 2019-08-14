//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewUpdaterType-Protocol.h"

@class NFLFeedSettings, NSSet, NSString;

@interface FRFeedCollectionViewZoomOutUpdater : NSObject <FRFeedCollectionViewUpdaterType>
{
    NSSet *_supportedConfigurations;
}

@property(copy, nonatomic) NSSet *supportedConfigurations; // @synthesize supportedConfigurations=_supportedConfigurations;
- (void).cxx_destruct;
- (void)updateCollectionView:(id)arg1 result:(id)arg2 applyBlueprint:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NFLFeedSettings *feedSettings;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long imageLoadStyle;
@property(readonly) Class superclass;

@end

