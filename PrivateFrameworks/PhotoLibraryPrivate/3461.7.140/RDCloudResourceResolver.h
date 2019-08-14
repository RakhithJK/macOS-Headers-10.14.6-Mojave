//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface RDCloudResourceResolver : NSObject
{
    NSMutableDictionary *_temporaryDerivatives;
}

@property(retain) NSDictionary *temporaryDerivatives; // @synthesize temporaryDerivatives=_temporaryDerivatives;
- (void).cxx_destruct;
- (void)addTemporaryDerivative:(id)arg1 forModel:(id)arg2;
- (id)_readOnlyCopy:(id)arg1;
- (id)readOnlyCloudVersions:(id)arg1;
- (BOOL)shouldWaitForMissingResources;
- (void)enumerateCloudResourcesForVersion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)prepareForVersions:(id)arg1;

@end

