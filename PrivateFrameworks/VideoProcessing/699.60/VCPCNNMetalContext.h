//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice;

@interface VCPCNNMetalContext : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLCommandBuffer> _commandBuffer;
}

+ (BOOL)supportVectorForward;
+ (BOOL)supportGPU;
@property(retain) id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property(retain) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain) id <MTLDevice> device; // @synthesize device=_device;
- (void).cxx_destruct;
- (int)execute;
- (id)initNewContext:(BOOL)arg1;

@end

