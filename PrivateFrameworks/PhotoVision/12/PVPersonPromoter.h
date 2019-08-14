//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, PVPersonClusterManager, PVPersonDeduperProfile, PVPersonPromoterProfile;
@protocol PVPersonPromoterDelegate, PVPhotoLibraryProtocol;

@interface PVPersonPromoter : NSObject
{
    BOOL _didAskFaceProcesingProgress;
    float _faceProcessingProgress;
    PVPersonClusterManager *_personClusterManager;
    id <PVPersonPromoterDelegate> _delegate;
    id <PVPhotoLibraryProtocol> _photoLibrary;
    NSMutableDictionary *_metricsReport;
    NSNumber *_quiescentState;
    PVPersonPromoterProfile *_promoterProfile;
    PVPersonDeduperProfile *_deduperProfile;
}

+ (void)cumulativeNormalDistributionWithData:(id)arg1 sigmaFactor:(double)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)probabilityDensityNormalDistributionWithData:(id)arg1 sigmaFactor:(double)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)requestSuggestedMePersonIdentifierAtURL:(id)arg1 withError:(id *)arg2;
+ (void)setProcessed:(BOOL)arg1 forLibrary:(id)arg2;
+ (BOOL)hasProcessedForLibrary:(id)arg1;
+ (BOOL)_writePersonPromoterInformation:(id)arg1 atURL:(id)arg2;
+ (id)_personPromoterInformationAtURL:(id)arg1;
+ (BOOL)isEnabled;
@property(retain, nonatomic) PVPersonDeduperProfile *deduperProfile; // @synthesize deduperProfile=_deduperProfile;
@property(retain, nonatomic) PVPersonPromoterProfile *promoterProfile; // @synthesize promoterProfile=_promoterProfile;
@property(nonatomic) BOOL didAskFaceProcesingProgress; // @synthesize didAskFaceProcesingProgress=_didAskFaceProcesingProgress;
@property(nonatomic) float faceProcessingProgress; // @synthesize faceProcessingProgress=_faceProcessingProgress;
@property(retain, nonatomic) NSNumber *quiescentState; // @synthesize quiescentState=_quiescentState;
@property(readonly, nonatomic) NSMutableDictionary *metricsReport; // @synthesize metricsReport=_metricsReport;
@property(retain, nonatomic) id <PVPhotoLibraryProtocol> photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) __weak id <PVPersonPromoterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PVPersonClusterManager *personClusterManager; // @synthesize personClusterManager=_personClusterManager;
- (void).cxx_destruct;
- (id)_sortedSocialGroups:(id)arg1 withPersonsByLocalIdentifier:(id)arg2;
- (id)_graphOrderedPersonsWithPersons:(id)arg1 withAllPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (BOOL)_updateSuggestedMeIdentifierWithPersons:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (BOOL)_promoteInterestingPersons:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (id)_interestingPersonsFromVerifiedPersons:(id)arg1 unverifiedPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (BOOL)_personClusterShouldBeVerified:(id)arg1;
- (id)_sortedUnverifiedPersonsToDedupForVerifiedPersons:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (id)_verifiedPersonsToProcess;
- (id)_newPersonDeduperWithVerifiedPersons:(id)arg1;
- (id)interestingPersonsFromPersons:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (double)_personTimespan:(id)arg1;
- (id)advancedStatus;
- (BOOL)promoteUnverifiedPersonsWithUpdateBlock:(CDUnknownBlockType)arg1;
- (id)initWithPhotoLibrary:(id)arg1 andDelegate:(id)arg2;
- (BOOL)isInQuiescentState;
- (void)reportMetrics;
- (void)incrementMetricForKey:(id)arg1 withValue:(unsigned long long)arg2;

@end

