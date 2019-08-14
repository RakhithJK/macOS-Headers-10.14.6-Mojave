//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RemoteConfiguration/RCOperation.h>

@class NSObject, NSString, NSURL, RCConfigurationResource;
@protocol OS_dispatch_queue;

@interface RCFallbackOperation : RCOperation
{
    BOOL _enableExtraLogs;
    NSString *_requestKey;
    NSURL *_fallbackURL;
    RCConfigurationResource *_cachedConfigurationResource;
    unsigned long long _environment;
    CDUnknownBlockType _configurationCompletionHandler;
    NSObject<OS_dispatch_queue> *_completionQueue;
    RCConfigurationResource *_configurationResource;
}

@property(retain, nonatomic) RCConfigurationResource *configurationResource; // @synthesize configurationResource=_configurationResource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(copy, nonatomic) CDUnknownBlockType configurationCompletionHandler; // @synthesize configurationCompletionHandler=_configurationCompletionHandler;
@property(nonatomic) BOOL enableExtraLogs; // @synthesize enableExtraLogs=_enableExtraLogs;
@property(nonatomic) unsigned long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) RCConfigurationResource *cachedConfigurationResource; // @synthesize cachedConfigurationResource=_cachedConfigurationResource;
@property(retain, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(retain, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
- (void).cxx_destruct;
- (void)_parseFallbackResponse:(id)arg1 fallbackURL:(id)arg2 requestKey:(id)arg3 enableExtraLogs:(BOOL)arg4 maxAge:(id)arg5 etag:(id)arg6 lastModifiedString:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_fetchConfigurationWithURL:(id)arg1 requestKey:(id)arg2 enableExtraLogs:(BOOL)arg3;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end

