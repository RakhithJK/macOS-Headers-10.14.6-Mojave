//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCFetchedValueDescriptor.h>

@class FCFetchedValueManager;
@protocol FCContentContext;

@interface FCHeldVanityURLMappingFetchedValueDescriptor : FCFetchedValueDescriptor
{
    id <FCContentContext> _contentContext;
    FCFetchedValueManager *_resourceConfigurationManager;
}

@property(readonly, nonatomic) FCFetchedValueManager *resourceConfigurationManager; // @synthesize resourceConfigurationManager=_resourceConfigurationManager;
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
- (void).cxx_destruct;
- (void)_processFetchOperationResult:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)isValue:(struct FCShallowCopyPair *)arg1 equalToValue:(struct FCShallowCopyPair *)arg2;
- (id)inputManagers;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fastCachedValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentContext:(id)arg1 resourceConfigurationManager:(id)arg2;
- (id)init;

@end

