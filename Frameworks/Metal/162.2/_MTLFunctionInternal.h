//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Metal/_MTLFunction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MTLFunctionInternal : _MTLFunction
{
    struct MTLFunctionData _functionData;
    unsigned char _publicMetadataInitialized;
    unsigned char _privateMetadataInitialized;
    unsigned char _sourceArchiveMetadataInitialized;
    struct MTLProgramObject *_programObject;
    NSString *_filePath;
    long long _lineNumber;
}

- (unsigned long long)renderTargetArrayIndexType;
- (long long)lineNumber;
- (void)setLineNumber:(long long)arg1;
- (id)unpackedFilePath;
- (void)setUnpackedFilePath:(id)arg1;
- (void)initializeSourceArchive;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)initializePrivateMetadata;
- (id)newSpecializedFunctionWithRequestType:(int)arg1 llvmTargetVersion:(unsigned int)arg2 constants:(id)arg3 functionCache:(id)arg4 error:(id *)arg5;
- (void)newSpecializedFunctionWithRequestType:(int)arg1 llvmTargetVersion:(unsigned int)arg2 constants:(id)arg3 functionCache:(id)arg4 sync:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setSourceArchiveOffset:(unsigned long long)arg1;
- (unsigned long long)sourceArchiveOffset;
- (id)functionConstantsDictionary;
- (unsigned int)requiredLLVMVersion;
- (unsigned long long)bitCodeFileSize;
- (const CDStruct_41a22ec7 *)bitCodeHash;
- (void)setFunctionConstants:(id)arg1;
- (id)functionConstants;
- (BOOL)needsFunctionConstantValues;
- (void)setStageInputAttributes:(id)arg1;
- (id)stageInputAttributes;
- (id)arguments;
- (void)setArguments:(id)arg1;
- (id)returnType;
- (void)setReturnType:(id)arg1;
- (void)setVertexAttributes:(id)arg1;
- (id)vertexAttributes;
- (void)initializePublicMetadata;
- (long long)patchControlPointCount;
- (unsigned long long)patchType;
- (unsigned char)bitcodeType;
- (unsigned long long)bitCodeOffset;
- (const struct MTLFunctionData *)functionData;
- (struct MTLProgramObject *)programObject;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData *)arg3 functionData:(struct MTLFunctionData *)arg4 device:(id)arg5;

@end

