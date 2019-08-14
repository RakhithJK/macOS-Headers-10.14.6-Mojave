//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSData;

@protocol BAASupportDelegate <NSObject>
+ (int)getBlessedUser:(unsigned int *)arg1 keybagUUID:(unsigned char [16])arg2;
+ (int)confirmSigKey:(unsigned int)arg1 status:(int)arg2;
+ (int)getSigKeyCertificates:(unsigned int)arg1 certificates:(id *)arg2;
+ (int)getSigKeyExpDate:(unsigned int)arg1 expirationDate:(unsigned long long *)arg2;
+ (int)setSigKey:(unsigned int)arg1 expirationDate:(unsigned long long)arg2 keyData:(NSData *)arg3 certificates:(NSArray *)arg4;
+ (int)generateSigKey:(unsigned int)arg1 keyData:(id *)arg2 attestation:(id *)arg3 pubKey:(id *)arg4;
+ (BOOL)isInternal;
@end

