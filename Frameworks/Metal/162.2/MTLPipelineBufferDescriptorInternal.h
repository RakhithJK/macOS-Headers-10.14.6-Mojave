//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Metal/MTLPipelineBufferDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLPipelineBufferDescriptorInternal : MTLPipelineBufferDescriptor
{
    struct MTLPipelineBufferDescriptorPrivate _private;
}

- (const struct MTLPipelineBufferDescriptorPrivate *)_descriptorPrivate;
- (void)setMutability:(unsigned long long)arg1;
- (unsigned long long)mutability;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

