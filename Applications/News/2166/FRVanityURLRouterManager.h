//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRURLRouterManagerType-Protocol.h"

@class FCVanityURLRedirectService, NSString;
@protocol FRURLAnalyticsReferralFactory, FRURLRouterManagerType;

@interface FRVanityURLRouterManager : NSObject <FRURLRouterManagerType>
{
    id <FRURLAnalyticsReferralFactory> _analyticsReferralFactory;
    FCVanityURLRedirectService *_redirectService;
    id <FRURLRouterManagerType> _routerManager;
}

@property(readonly, nonatomic) id <FRURLRouterManagerType> routerManager; // @synthesize routerManager=_routerManager;
@property(readonly, nonatomic) FCVanityURLRedirectService *redirectService; // @synthesize redirectService=_redirectService;
@property(readonly, nonatomic) id <FRURLAnalyticsReferralFactory> analyticsReferralFactory; // @synthesize analyticsReferralFactory=_analyticsReferralFactory;
- (void).cxx_destruct;
- (void)addRoutable:(id)arg1;
- (BOOL)handleOpenURL:(id)arg1 options:(id)arg2 analyticsReferral:(id)arg3;
- (id)initWithAnalyticsReferralFactory:(id)arg1 redirectService:(id)arg2 routerManager:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

