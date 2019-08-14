//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCAccessChecker.h>

@class FCPrivateChannelMembershipController;

@interface FCArticleDraftAccessChecker : FCAccessChecker
{
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
}

@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // @synthesize privateChannelMembershipController=_privateChannelMembershipController;
- (void).cxx_destruct;
- (BOOL)shouldShowAllDraftContent;
- (void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)canSynchronouslyCheckAccessToItem:(id)arg1;
- (id)initWithPrivateChannelMembershipController:(id)arg1;
- (id)init;

@end

