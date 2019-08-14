//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class NSString;

@interface MTLSamplerDescriptor : NSObject <NSCopying>
{
    BOOL _lodAverage;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
@property(nonatomic) BOOL lodAverage; // @synthesize lodAverage=_lodAverage;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long borderColor; // @dynamic borderColor;
@property(nonatomic) unsigned long long compareFunction; // @dynamic compareFunction;
@property(nonatomic) BOOL forceResourceIndex; // @dynamic forceResourceIndex;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(nonatomic) float lodMaxClamp; // @dynamic lodMaxClamp;
@property(nonatomic) float lodMinClamp; // @dynamic lodMinClamp;
@property(nonatomic) unsigned long long magFilter; // @dynamic magFilter;
@property(nonatomic) unsigned long long maxAnisotropy; // @dynamic maxAnisotropy;
@property(nonatomic) unsigned long long minFilter; // @dynamic minFilter;
@property(nonatomic) unsigned long long mipFilter; // @dynamic mipFilter;
@property(nonatomic) BOOL normalizedCoordinates; // @dynamic normalizedCoordinates;
@property(nonatomic) unsigned long long rAddressMode; // @dynamic rAddressMode;
@property(nonatomic) unsigned long long resourceIndex; // @dynamic resourceIndex;
@property(nonatomic) unsigned long long sAddressMode; // @dynamic sAddressMode;
@property(nonatomic) BOOL supportArgumentBuffers; // @dynamic supportArgumentBuffers;
@property(nonatomic) unsigned long long tAddressMode; // @dynamic tAddressMode;

@end

