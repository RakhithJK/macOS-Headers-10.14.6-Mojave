//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSObject, Protocol;
@protocol NSObject, NSSecureCoding;

@protocol _MXExtensionRequestDispatching <NSObject>
- (void)dispatchRequest:(NSObject<NSSecureCoding> *)arg1 vendor:(id <NSObject>)arg2 completion:(void (^)(NSObject<NSSecureCoding> *, NSError *))arg3;

@optional
- (Protocol *)serviceProtocol;
@end

