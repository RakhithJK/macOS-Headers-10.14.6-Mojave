//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PFMediaCapabilitiesQuery : NSObject
{
    NSMutableDictionary *_capabilitiesInformation;
}

@property(retain) NSMutableDictionary *capabilitiesInformation; // @synthesize capabilitiesInformation=_capabilitiesInformation;
- (void).cxx_destruct;
- (void)addLivePhotoInformationToDictionary:(id)arg1;
- (void)addTranscodeChoiceWithOptions:(id)arg1;
- (void)addVendorSpecificInformation;
- (void)addHEIFContainerInformationToDictionary:(id)arg1;
- (void)addHEVCCodecInformationToDictionary:(id)arg1;
- (void)addCodecInformation;
- (void)addVersion;
- (void)gatherCapabilitiesWithOptions:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

