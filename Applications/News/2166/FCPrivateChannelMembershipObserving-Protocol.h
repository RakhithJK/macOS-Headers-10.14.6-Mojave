//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FCPrivateChannelMembershipController, NSSet;

@protocol FCPrivateChannelMembershipObserving <NSObject>

@optional
- (void)privateChannelMembershipController:(FCPrivateChannelMembershipController *)arg1 didAddMemberships:(NSSet *)arg2 changedMemberships:(NSSet *)arg3 removedMemberships:(NSSet *)arg4;
@end

