//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PackageKit/PKPackage.h>

@class NSArray, NSString;

@interface PKMutablePackage : PKPackage
{
    NSArray *_onDiskComponents;
    NSString *_payloadRoot;
    NSString *_baselinePayloadRoot;
    NSString *_scriptRoot;
    NSArray *_maskExpressions;
    CDUnknownBlockType _ownershipModifier;
    CDUnknownBlockType _baselineNameMapper;
}

- (BOOL)writeToArchive:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)writeToArchive:(id)arg1 error:(id *)arg2;
- (void)setModifyOwnershipUsingBlock:(CDUnknownBlockType)arg1;
- (void)setMaskExpressions:(id)arg1;
- (void)setScriptRoot:(id)arg1;
- (void)setPayloadRoot:(id)arg1;
- (void)setComponents:(id)arg1;
- (id)_componentMap;
- (void)dealloc;
- (id)initWithPackageInfo:(id)arg1 ofType:(id)arg2;
- (void)_staticObsoleteFilesOrRecursiveDirectories:(id)arg1;
- (void)_setStaticObsoleteDirectories:(id)arg1;
- (void)_setStaticObsoleteFiles:(id)arg1;
- (void)setMapBaselineNamesUsingBlock:(CDUnknownBlockType)arg1;
- (void)setBaselinePayloadRoot:(id)arg1;
- (BOOL)_writeToArchive:(id)arg1 atPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithPackageInfo:(id)arg1;

@end

