//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PACCompressionSettings : NSObject
{
    NSMutableDictionary *mCompressionIdentifierDict;
}

+ (id)optionsForQuality:(int)arg1 withQualityDict:(id)arg2;
+ (id)compressionOptionDictWithIdentifier:(id)arg1 bytesPerHour:(id)arg2;
+ (BOOL)validateIdentifierDictionary:(id)arg1;
+ (id)sharedCompressionSettings;
@property(retain) NSMutableDictionary *mCompressionIdentifierDict; // @synthesize mCompressionIdentifierDict;
- (id)screenOptionsForQuality:(int)arg1;
- (id)videoOptionsForQuality:(int)arg1;
- (id)audioOptionsForQuality:(int)arg1;
- (id)localizedDescriptionForMediaType:(int)arg1 recordingQuality:(int)arg2;
- (id)recordedBytesPerHourForMediaType:(int)arg1 recordingQuality:(int)arg2;
- (id)compressionOptionsForMediaType:(int)arg1 recordingQuality:(int)arg2;
- (id)qualityDictForMediaType:(int)arg1;
- (void)setCompressionIdentifierDictionary:(id)arg1;
- (id)compressionIdentifierDictionary;
- (void)finalize;
- (void)dealloc;

@end

