//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

#import <Foundation/NSKeyValueProxyCaching-Protocol.h>

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueMutableArray : NSMutableArray <NSKeyValueProxyCaching>
{
    NSObject *_container;
    NSString *_key;
}

+ (id)_proxyShare;
- (void)setArray:(id)arg1;
- (void)dealloc;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (CDStruct_a70f6672)_proxyLocator;

@end

