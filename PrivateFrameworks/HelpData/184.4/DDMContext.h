//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HPDEnvironment, NSDictionary, NSProcessInfo, NSString;

@interface DDMContext : NSObject
{
    NSProcessInfo *_processInfo;
    NSDictionary *_systemVersionDictionary;
    HPDEnvironment *_environment;
    CDStruct_f6aba300 _osVersionSystem;
}

+ (id)sharedContext;
@property(retain) HPDEnvironment *environment; // @synthesize environment=_environment;
@property(retain) NSDictionary *systemVersionDictionary; // @synthesize systemVersionDictionary=_systemVersionDictionary;
@property CDStruct_f6aba300 osVersionSystem; // @synthesize osVersionSystem=_osVersionSystem;
@property(retain) NSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
- (void).cxx_destruct;
@property(readonly) NSString *acEnvironmentName;
@property(readonly) NSString *environmentName;
- (id)description;
@property(readonly) long long osVersionPatch;
@property(readonly) long long osVersionMinor;
@property(readonly) long long osVersionMajor;
@property(readonly) NSString *osVersionBuild;
@property(readonly) NSString *osVersion;
@property(readonly) NSString *osProductName;
@property(readonly) NSString *osVersionString;
@property(readonly) NSString *platform;
@property(readonly) NSString *hardware;
- (id)preferedLocalizationsFromLanguages:(id)arg1;
@property(readonly) NSString *languages;
- (id)init;

@end

