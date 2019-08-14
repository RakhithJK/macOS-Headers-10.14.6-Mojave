//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreMediaStream/MSMediaStreamDaemon.h>

@class ICPMyPhotoStreamService;

@interface CPSMediaStreamDaemon : MSMediaStreamDaemon
{
    ICPMyPhotoStreamService *_myPhotoStreamService;
}

@property __weak ICPMyPhotoStreamService *myPhotoStreamService; // @synthesize myPhotoStreamService=_myPhotoStreamService;
- (void).cxx_destruct;
- (void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)arg1;
- (void)didReceiveAuthenticationFailureForPersonID:(id)arg1;
- (id)initWithMyPhotoStreamService:(id)arg1;

@end
