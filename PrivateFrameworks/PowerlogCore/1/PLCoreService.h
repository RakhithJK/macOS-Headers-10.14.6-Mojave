//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PowerlogCore/PLCoreOperator.h>

@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator
{
    NSMutableDictionary *_services;
}

@property(retain) NSMutableDictionary *services; // @synthesize services=_services;
- (void).cxx_destruct;
- (void)stopServices;
- (void)startServices;
- (id)init;

@end

