//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class NSFileProviderDomain, NSString;

__attribute__((visibility("hidden")))
@interface FPFetchDefaultContainerOperation : FPActionOperation
{
    NSString *_appName;
    NSString *_appIdentifier;
    NSFileProviderDomain *_domain;
    CDUnknownBlockType _fetchCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)mainWithExtensionProxy:(id)arg1;
- (id)initForApplicationProxy:(id)arg1 provider:(id)arg2;

@end

