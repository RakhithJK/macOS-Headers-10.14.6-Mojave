//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AUConnectedClient : NSObject
{
    NSString *name;
    NSString *hostname;
    NSString *quality;
    NSString *speed;
    NSString *ipAddress;
    NSString *macAddress;
    NSString *signalStrength;
    NSString *phyMode;
    BOOL guest;
}

@property(nonatomic) BOOL guest; // @synthesize guest;
@property(retain, nonatomic) NSString *phyMode; // @synthesize phyMode;
@property(retain, nonatomic) NSString *signalStrength; // @synthesize signalStrength;
@property(retain, nonatomic) NSString *macAddress; // @synthesize macAddress;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress;
@property(retain, nonatomic) NSString *speed; // @synthesize speed;
@property(retain, nonatomic) NSString *quality; // @synthesize quality;
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (void)dealloc;

@end

