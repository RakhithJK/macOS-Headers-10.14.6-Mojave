//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class NSData;

@protocol CKDProtobufMessageSigningDelegate <NSObject>
- (void)generateSignature:(void (^)(NSData *, NSError *))arg1;
- (void)updateSignatureWithTransmittedBytes:(NSData *)arg1;
@end

