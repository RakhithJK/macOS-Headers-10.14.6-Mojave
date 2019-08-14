//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, VCVideoRuleCollections;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorVideoResults : NSObject
{
    BOOL _isSupported;
    unsigned int _remoteSSRC;
    BOOL _isRTCPFBEnabled;
    VCVideoRuleCollections *_videoRuleCollections;
    NSMutableDictionary *_featureStrings;
    NSMutableDictionary *_parameterSets;
}

@property(retain, nonatomic) NSDictionary *parameterSets; // @synthesize parameterSets=_parameterSets;
@property(nonatomic) BOOL isSupported; // @synthesize isSupported=_isSupported;
@property(retain, nonatomic) NSDictionary *featureStrings; // @synthesize featureStrings=_featureStrings;
@property(readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections; // @synthesize videoRuleCollections=_videoRuleCollections;
@property(nonatomic) BOOL isRTCPFBEnabled; // @synthesize isRTCPFBEnabled=_isRTCPFBEnabled;
@property(nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
- (void)addParameterSet:(id)arg1 key:(id)arg2;
- (void)addFeatureString:(id)arg1 key:(id)arg2;
- (void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (void)dealloc;
- (id)init;

@end

