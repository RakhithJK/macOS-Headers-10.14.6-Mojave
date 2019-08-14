//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ExtensionsDataVaultsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSNumber *_extensionArchivesExtracted;
}

+ (id)extensionBundlesDataVaultsURL;
- (void).cxx_destruct;
- (void)removeExtensionBundlesInDataVaultsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)extractExtensionArchiveToDataVaults:(id)arg1 bundleDirectoryName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)shouldReadFromExtensionBundlesDataVaultsURL;
- (void)setExtensionArchivesExtracted:(BOOL)arg1;
- (BOOL)extensionArchivesExtracted;
- (id)init;

@end

