//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CoreWiFiMCSVHT : NSObject
{
    NSMutableArray *longGuardInterval20MHzNSS1;
    NSMutableArray *shortGuardInterval20MHzNSS1;
    NSMutableArray *longGuardInterval20MHzNSS2;
    NSMutableArray *shortGuardInterval20MHzNSS2;
    NSMutableArray *longGuardInterval20MHzNSS3;
    NSMutableArray *shortGuardInterval20MHzNSS3;
    NSMutableArray *longGuardInterval40MHzNSS1;
    NSMutableArray *shortGuardInterval40MHzNSS1;
    NSMutableArray *longGuardInterval40MHzNSS2;
    NSMutableArray *shortGuardInterval40MHzNSS2;
    NSMutableArray *longGuardInterval40MHzNSS3;
    NSMutableArray *shortGuardInterval40MHzNSS3;
    NSMutableArray *longGuardInterval80MHzNSS1;
    NSMutableArray *shortGuardInterval80MHzNSS1;
    NSMutableArray *longGuardInterval80MHzNSS2;
    NSMutableArray *shortGuardInterval80MHzNSS2;
    NSMutableArray *longGuardInterval80MHzNSS3;
    NSMutableArray *shortGuardInterval80MHzNSS3;
    NSMutableArray *longGuardInterval160MHzNSS1;
    NSMutableArray *shortGuardInterval160MHzNSS1;
    NSMutableArray *longGuardInterval160MHzNSS2;
    NSMutableArray *shortGuardInterval160MHzNSS2;
    NSMutableArray *longGuardInterval160MHzNSS3;
    NSMutableArray *shortGuardInterval160MHzNSS3;
    NSMutableArray *longGuardInterval20MHz;
    NSMutableArray *shortGuardInterval20MHz;
    NSMutableArray *longGuardInterval40MHz;
    NSMutableArray *shortGuardInterval40MHz;
    NSMutableArray *longGuardInterval80MHz;
    NSMutableArray *shortGuardInterval80MHz;
    NSMutableArray *longGuardInterval160MHz;
    NSMutableArray *shortGuardInterval160MHz;
}

+ (id)sharedSystem;
- (id)rateForMCS:(unsigned long long)arg1 channelWidth:(unsigned long long)arg2 nss:(unsigned long long)arg3 shortGI:(BOOL)arg4;
- (void)setup160MHz;
- (void)setup80MHz;
- (void)setup40MHz;
- (void)setup20MHz;
- (void)dealloc;
- (id)init;

@end

