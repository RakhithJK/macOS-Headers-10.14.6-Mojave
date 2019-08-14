//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSSharingServiceDelegate-Protocol.h"

@class CKShare, NSArray, NSError, NSItemProvider, NSSharingService;

@protocol NSCloudSharingServiceDelegate <NSSharingServiceDelegate>

@optional
- (void)sharingService:(NSSharingService *)arg1 didStopSharing:(CKShare *)arg2;
- (void)sharingService:(NSSharingService *)arg1 didSaveShare:(CKShare *)arg2;
- (unsigned long long)optionsForSharingService:(NSSharingService *)arg1 shareProvider:(NSItemProvider *)arg2;
- (void)sharingService:(NSSharingService *)arg1 didCompleteForItems:(NSArray *)arg2 error:(NSError *)arg3;
@end

