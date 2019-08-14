//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetalTools/MTLFunction-Protocol.h>

@class MTLFunctionReflection, MTLType, NSArray, NSData, NSString;
@protocol MTLIndirectArgumentEncoder;

@protocol MTLFunctionSPI <MTLFunction>
@property(readonly) NSArray *arguments;
@property(readonly) MTLType *returnType;
@property(readonly) unsigned long long renderTargetArrayIndexType;
@property(readonly, copy) NSString *unpackedFilePath;
@property(readonly) long long lineNumber;
@property(readonly, copy) NSString *filePath;
- (NSData *)bitcodeData;
- (const CDStruct_5af0f983 *)bitCodeHash;
- (id <MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (id <MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(void (^)(MTLFunctionReflection *))arg2;
- (MTLFunctionReflection *)reflectionWithOptions:(unsigned long long)arg1;
@end

