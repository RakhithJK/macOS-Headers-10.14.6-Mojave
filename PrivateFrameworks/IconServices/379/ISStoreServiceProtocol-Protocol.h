//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IconServices/NSObject-Protocol.h>

@class NSData, NSString, NSUUID;

@protocol ISStoreServiceProtocol <NSObject>
- (void)addData:(NSData *)arg1 withUUID:(NSUUID *)arg2 domain:(NSString *)arg3 completion:(void (^)(BOOL))arg4;
- (void)fetchCachePathForDomain:(NSString *)arg1 completion:(void (^)(NSString *, NSString *))arg2;
@end

