//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface DEExtensionManager : NSObject
{
    BOOL _extendedLoaded;
    NSObject<OS_dispatch_queue> *_initialLoadQueue;
    NSArray *_extensions;
    CDUnknownBlockType _afterExtendedBlock;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL extendedLoaded; // @synthesize extendedLoaded=_extendedLoaded;
@property(copy, nonatomic) CDUnknownBlockType afterExtendedBlock; // @synthesize afterExtendedBlock=_afterExtendedBlock;
@property(retain, nonatomic) NSArray *extensions; // @synthesize extensions=_extensions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *initialLoadQueue; // @synthesize initialLoadQueue=_initialLoadQueue;
- (void).cxx_destruct;
- (id)extensionsWithFilter:(id)arg1;
- (void)loadExtensions;
- (id)init;
- (id)extensionForIdentifier:(id)arg1;

@end
