//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Suggestions/ABImageClient-Protocol.h>

@class ABPerson, NSArray, NSHashTable, NSString;
@protocol SGTABPersonImageAsyncLoaderDelegate;

__attribute__((visibility("hidden")))
@interface SGTABPersonImageAsyncLoader : NSObject <ABImageClient>
{
    long long asyncLoadTag;
    ABPerson *person;
    id <SGTABPersonImageAsyncLoaderDelegate> delegate;
    NSHashTable *relatedObjects;
}

@property(readonly) ABPerson *person; // @synthesize person;
@property __weak id <SGTABPersonImageAsyncLoaderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
@property(readonly) NSArray *relatedObjects;
- (void)addRelatedObject:(id)arg1;
- (void)consumeImageData:(id)arg1 forTag:(long long)arg2;
- (void)cancelLoading;
- (void)removeRelatedObject:(id)arg1;
- (void)removeAllRelatedObjects;
- (void)startLoading;
- (void)dealloc;
- (id)initWithPerson:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

