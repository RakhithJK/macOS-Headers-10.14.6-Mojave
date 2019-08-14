//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCFetchedValueDescriptor.h>

@protocol FCCoreConfigurationManager;

@interface FCCoreConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor
{
    id <FCCoreConfigurationManager> _configurationManager;
}

@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
- (void).cxx_destruct;
- (id)inputManagers;
- (BOOL)isValue:(id)arg1 equalToValue:(id)arg2;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fastCachedValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigurationManager:(id)arg1;
- (id)init;

@end

