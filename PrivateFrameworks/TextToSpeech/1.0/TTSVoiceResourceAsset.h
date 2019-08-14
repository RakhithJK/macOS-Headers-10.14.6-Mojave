//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TextToSpeech/TTSAssetBase.h>

#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSURL;

@interface TTSVoiceResourceAsset : TTSAssetBase <NSSecureCoding>
{
    NSArray *_languages;
    NSDictionary *_resourceList;
    NSURL *_searchPathURL;
    NSDictionary *_voiceConfig;
}

+ (id)legacyPlatforms;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *voiceConfig; // @synthesize voiceConfig=_voiceConfig;
@property(copy, nonatomic) NSURL *searchPathURL; // @synthesize searchPathURL=_searchPathURL;
@property(copy, nonatomic) NSDictionary *resourceList; // @synthesize resourceList=_resourceList;
@property(copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
- (void).cxx_destruct;
- (id)defaultFootprintString;
- (id)defaultTypeString;
- (id)defaultVoice;
- (void)syncWithConfigFile:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

