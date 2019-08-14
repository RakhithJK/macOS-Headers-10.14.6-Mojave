//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SGMContactConfirmed, SGMContactDetailConfirmed, SGMContactDetailRejected, SGMContactDetailUsed, SGMContactInBanner, SGMContactRejected, SGMEventBannerConfirmed, SGMEventBannerRejected, SGMEventInBanner, SGMMaybeInformationShown, SGMUnknownContactInformationShown;

@interface SGSuggestedActionMetrics : NSObject
{
    SGMContactInBanner *_contactInBanner;
    SGMContactConfirmed *_contactConfirmed;
    SGMContactRejected *_contactRejected;
    SGMContactDetailConfirmed *_contactDetailConfirmed;
    SGMContactDetailRejected *_contactDetailRejected;
    SGMContactDetailUsed *_contactDetailUsed;
    SGMEventInBanner *_eventInBanner;
    SGMEventBannerConfirmed *_eventBannerConfirmed;
    SGMEventBannerRejected *_eventBannerRejected;
    SGMMaybeInformationShown *_maybeInformationShown;
    SGMUnknownContactInformationShown *_unknownContactInformationShown;
}

+ (void)recordContactDetailUsage:(id)arg1 withApp:(id)arg2;
+ (void)recordContactDetailEngagementWithResolution:(long long)arg1 detailType:(struct SGMContactDetailType_)arg2 extractionType:(unsigned long long)arg3;
+ (void)recordBannerRejectedWithEvent:(id)arg1 inApp:(struct SGMBannerDisplayApp_)arg2;
+ (void)recordBannerConfirmedWithEvent:(id)arg1 proposedEKEvent:(id)arg2 confirmedEKEvent:(id)arg3 inApp:(struct SGMBannerDisplayApp_)arg4;
+ (void)recordBannerRejectedWithContact:(id)arg1 inApp:(struct SGMBannerDisplayApp_)arg2;
+ (void)recordBannerConfirmedWithContact:(id)arg1 proposedCNContact:(id)arg2 confirmedCNContact:(id)arg3 inApp:(struct SGMBannerDisplayApp_)arg4;
+ (void)recordBannerShownWithContacts:(id)arg1 events:(id)arg2 inApp:(struct SGMBannerDisplayApp_)arg3;
+ (void)recordMaybeContactFrom:(unsigned long long)arg1;
+ (id)instance;
@property(retain, nonatomic) SGMUnknownContactInformationShown *unknownContactInformationShown; // @synthesize unknownContactInformationShown=_unknownContactInformationShown;
@property(retain, nonatomic) SGMMaybeInformationShown *maybeInformationShown; // @synthesize maybeInformationShown=_maybeInformationShown;
@property(retain, nonatomic) SGMEventBannerRejected *eventBannerRejected; // @synthesize eventBannerRejected=_eventBannerRejected;
@property(retain, nonatomic) SGMEventBannerConfirmed *eventBannerConfirmed; // @synthesize eventBannerConfirmed=_eventBannerConfirmed;
@property(retain, nonatomic) SGMEventInBanner *eventInBanner; // @synthesize eventInBanner=_eventInBanner;
@property(retain, nonatomic) SGMContactDetailUsed *contactDetailUsed; // @synthesize contactDetailUsed=_contactDetailUsed;
@property(retain, nonatomic) SGMContactDetailRejected *contactDetailRejected; // @synthesize contactDetailRejected=_contactDetailRejected;
@property(retain, nonatomic) SGMContactDetailConfirmed *contactDetailConfirmed; // @synthesize contactDetailConfirmed=_contactDetailConfirmed;
@property(retain, nonatomic) SGMContactRejected *contactRejected; // @synthesize contactRejected=_contactRejected;
@property(retain, nonatomic) SGMContactConfirmed *contactConfirmed; // @synthesize contactConfirmed=_contactConfirmed;
@property(retain, nonatomic) SGMContactInBanner *contactInBanner; // @synthesize contactInBanner=_contactInBanner;
- (void).cxx_destruct;
- (id)init;

@end

