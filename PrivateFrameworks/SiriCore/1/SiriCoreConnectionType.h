//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriCoreConnectionType : NSObject
{
    long long _technology;
}

- (unsigned long long)aggregatorConnectionType;
- (long long)diagnosticConnectionType;
- (BOOL)canUseWiFiDirectly;
- (BOOL)isEdge;
- (BOOL)isWWAN;
- (long long)technology;
- (id)description;
- (id)initWithTechnology:(long long)arg1;

@end

