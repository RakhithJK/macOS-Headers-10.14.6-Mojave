//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SetupAssistantSupport/SASProximityAction.h>

@class SASProximityInformation;

@interface SASProximityInformationAction : SASProximityAction
{
    SASProximityInformation *_information;
}

+ (unsigned long long)actionID;
@property(retain) SASProximityInformation *information; // @synthesize information=_information;
- (void).cxx_destruct;
- (id)responsePayload;
- (void)setResponseFromData:(id)arg1;
- (BOOL)hasResponse;
- (id)init;

@end

