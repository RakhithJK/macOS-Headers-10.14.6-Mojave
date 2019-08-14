//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewerOverlayController.h"

#import "PFResourceAccessClient-Protocol.h"
#import "RDLibraryMessagesReceiver-Protocol.h"

@class IPXAnnotationsBadge, IPXBadgeStackController, IPXCloudPhotosDownloadProgressBadge, IPXEditedBadge, IPXFileTypeBadge, IPXHDRBadge, IPXKeywordsBadge, IPXLivePhotoBadge, IPXLocationBadge, IPXLowResUnusableFileBadge, IPXPortraitLightingBadge, IPXReferencedFileBadge, IPXSDOFBadge, NSArray, NSProgressIndicator, NSSet, NSString, RDDatabase;

@interface IPXBadgesOverlayController : IPXViewerOverlayController <RDLibraryMessagesReceiver, PFResourceAccessClient>
{
    unsigned int _axAlternateUIDisplayed:1;
    BOOL _observingDefaultsToggledNotifications;
    BOOL _fadesMouseOverBadges;
    IPXHDRBadge *_HDRBadge;
    IPXLivePhotoBadge *_livePhotoBadge;
    IPXSDOFBadge *_SDOFBadge;
    IPXLowResUnusableFileBadge *_lowResUnusableFileBadge;
    IPXPortraitLightingBadge *_portraitLightingBadge;
    IPXReferencedFileBadge *_referencedFileBadge;
    IPXFileTypeBadge *_fileTypeBadge;
    IPXKeywordsBadge *_keywordsBadge;
    IPXLocationBadge *_locationBadge;
    IPXAnnotationsBadge *_annotationsBadge;
    IPXCloudPhotosDownloadProgressBadge *_cloudPhotosProgressBadge;
    IPXEditedBadge *_editedBadge;
    NSProgressIndicator *_loadingIndicator;
    IPXBadgeStackController *_topLeadingBadgeStackController;
    IPXBadgeStackController *_topTrailingBadgeStackController;
    IPXBadgeStackController *_bottomLeadingBadgeStackController;
    IPXBadgeStackController *_bottomTrailingBadgeStackController;
    NSArray *_allBadgeStackControllers;
    RDDatabase *_observedDatabase;
    unsigned long long _versionModelId;
    unsigned long long _masterId;
    NSSet *_versionKeysAffectingBadges;
    NSSet *_masterKeysAffectingBadges;
    NSArray *_badgeStacksConstraints;
}

+ (Class)viewClass;
@property(retain, nonatomic) NSArray *badgeStacksConstraints; // @synthesize badgeStacksConstraints=_badgeStacksConstraints;
@property(copy) NSSet *masterKeysAffectingBadges; // @synthesize masterKeysAffectingBadges=_masterKeysAffectingBadges;
@property(copy) NSSet *versionKeysAffectingBadges; // @synthesize versionKeysAffectingBadges=_versionKeysAffectingBadges;
@property unsigned long long masterId; // @synthesize masterId=_masterId;
@property unsigned long long versionModelId; // @synthesize versionModelId=_versionModelId;
@property(nonatomic) __weak RDDatabase *observedDatabase; // @synthesize observedDatabase=_observedDatabase;
@property(readonly, nonatomic) NSArray *allBadgeStackControllers; // @synthesize allBadgeStackControllers=_allBadgeStackControllers;
@property(readonly, nonatomic) IPXBadgeStackController *bottomTrailingBadgeStackController; // @synthesize bottomTrailingBadgeStackController=_bottomTrailingBadgeStackController;
@property(readonly, nonatomic) IPXBadgeStackController *bottomLeadingBadgeStackController; // @synthesize bottomLeadingBadgeStackController=_bottomLeadingBadgeStackController;
@property(readonly, nonatomic) IPXBadgeStackController *topTrailingBadgeStackController; // @synthesize topTrailingBadgeStackController=_topTrailingBadgeStackController;
@property(readonly, nonatomic) IPXBadgeStackController *topLeadingBadgeStackController; // @synthesize topLeadingBadgeStackController=_topLeadingBadgeStackController;
@property(retain, nonatomic) NSProgressIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) IPXEditedBadge *editedBadge; // @synthesize editedBadge=_editedBadge;
@property(retain, nonatomic) IPXCloudPhotosDownloadProgressBadge *cloudPhotosProgressBadge; // @synthesize cloudPhotosProgressBadge=_cloudPhotosProgressBadge;
@property(retain, nonatomic) IPXAnnotationsBadge *annotationsBadge; // @synthesize annotationsBadge=_annotationsBadge;
@property(retain, nonatomic) IPXLocationBadge *locationBadge; // @synthesize locationBadge=_locationBadge;
@property(retain, nonatomic) IPXKeywordsBadge *keywordsBadge; // @synthesize keywordsBadge=_keywordsBadge;
@property(retain, nonatomic) IPXFileTypeBadge *fileTypeBadge; // @synthesize fileTypeBadge=_fileTypeBadge;
@property(retain, nonatomic) IPXReferencedFileBadge *referencedFileBadge; // @synthesize referencedFileBadge=_referencedFileBadge;
@property(retain, nonatomic) IPXPortraitLightingBadge *portraitLightingBadge; // @synthesize portraitLightingBadge=_portraitLightingBadge;
@property(retain, nonatomic) IPXLowResUnusableFileBadge *lowResUnusableFileBadge; // @synthesize lowResUnusableFileBadge=_lowResUnusableFileBadge;
@property(retain, nonatomic) IPXSDOFBadge *SDOFBadge; // @synthesize SDOFBadge=_SDOFBadge;
@property(retain, nonatomic) IPXLivePhotoBadge *livePhotoBadge; // @synthesize livePhotoBadge=_livePhotoBadge;
@property(retain, nonatomic) IPXHDRBadge *HDRBadge; // @synthesize HDRBadge=_HDRBadge;
@property(nonatomic) BOOL fadesMouseOverBadges; // @synthesize fadesMouseOverBadges=_fadesMouseOverBadges;
- (void).cxx_destruct;
- (void)_endBadgeUpdatesAnimated:(BOOL)arg1;
- (void)_beginBadgeUpdates;
- (void)setBadgeView:(id)arg1 collapsed:(BOOL)arg2 animate:(BOOL)arg3;
- (BOOL)isBadgeViewCollapsed:(id)arg1;
- (id)_badgeStackControllerContainingBadge:(id)arg1;
- (void)_updateBadge:(id)arg1 withVersion:(id)arg2 enabled:(BOOL)arg3 animate:(BOOL)arg4 optionalBadgeUpdateDelgate:(id)arg5;
- (void)updateBadgesAnimated:(BOOL)arg1 optionalBadgeUpdateDelgate:(id)arg2;
- (void)updateBadgesAnimated:(BOOL)arg1;
- (void)_userDefaultToggled:(id)arg1;
- (void)willBecomeInactive;
- (id)existingBadgeForClass:(Class)arg1;
- (void)loadView;
- (void)resourceWillShutdown:(struct NSObject *)arg1;
- (void)_handleLibraryUpdatedNotification:(id)arg1 forKeyPaths:(id)arg2 interestingKeys:(id)arg3;
- (void)libraryUpdatedVersion:(id)arg1 forKeyPaths:(id)arg2;
- (void)libraryUpdatedMaster:(id)arg1 forKeyPaths:(id)arg2;
- (id)multicaster:(id)arg1 queueForSelector:(SEL)arg2;
- (BOOL)visibleDuringViewerRotation;
- (void)_hideMouseOverBadges:(BOOL)arg1;
- (void)_hideMouseOverBadgesDelayed;
- (void)_cancelHideMouseOverBadgesAfterDelay;
- (void)_hideMouseOverBadgesAfterDelay:(double)arg1;
- (void)_showMouseOverBadges:(BOOL)arg1;
- (BOOL)_hasMouseOver;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateLivePhotoBadgeWithVersion:(id)arg1 enabled:(BOOL)arg2 animate:(BOOL)arg3 optionalBadgeUpdateDelgate:(id)arg4;
- (void)overlayDidActivate;
- (void)overlayWillDeactivate;
- (void)viewDidLoad;
- (void)_enumerateAllBadgeViewsRequiringConformanceToBadgeDisplayingProtocol:(BOOL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_stopObservingDefaultsToggledNotifications;
- (void)_startObservingDefaultsToggledNotifications;
- (void)_updateKeysAffectingBadgesIfNeeded;
- (void)updateVersion:(id)arg1;
- (void)removeFromParentViewController;
- (void)setDataSource:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

