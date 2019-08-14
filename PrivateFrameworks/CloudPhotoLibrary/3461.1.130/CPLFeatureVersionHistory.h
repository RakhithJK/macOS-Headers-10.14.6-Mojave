//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_anchorToVersion;
    NSMutableDictionary *_versionToAnchor;
    long long _currentFeatureVersion;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long currentFeatureVersion; // @synthesize currentFeatureVersion=_currentFeatureVersion;
- (void).cxx_destruct;
- (void)enumerateHistoryWithBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (long long)featureVersionForSyncAnchor:(struct NSData *)arg1;
- (struct NSData *)syncAnchorForFeatureVersion:(long long)arg1;
- (void)addSyncAnchor:(struct NSData *)arg1 forFeatureVersion:(long long)arg2;
- (id)initWithCurrentFeatureVersion:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

