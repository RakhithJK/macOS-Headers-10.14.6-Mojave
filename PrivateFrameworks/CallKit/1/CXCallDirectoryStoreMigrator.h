//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CXCallDirectoryStore;

@interface CXCallDirectoryStoreMigrator : NSObject
{
    CXCallDirectoryStore *_store;
    CDUnknownBlockType _storeCreationBlock;
    CDUnknownBlockType _retrieveExtensionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType retrieveExtensionBlock; // @synthesize retrieveExtensionBlock=_retrieveExtensionBlock;
@property(copy, nonatomic) CDUnknownBlockType storeCreationBlock; // @synthesize storeCreationBlock=_storeCreationBlock;
@property(retain, nonatomic) CXCallDirectoryStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)_performMigrationsStartingAtSchemaVersion:(long long)arg1 error:(id *)arg2;
- (id)performMigrationsWithError:(id *)arg1;
- (id)init;

@end

