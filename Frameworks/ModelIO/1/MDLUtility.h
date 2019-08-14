//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MDLUtility : NSObject
{
}

+ (void)convertToUSDZ:(id)arg1 writeToURL:(id)arg2;
+ (void)convertToUSDZWithURL:(id)arg1;
+ (void)writeFilesToArchive:(id)arg1 rootUSDPath:(id)arg2 resourcePaths:(id)arg3 entryNames:(id)arg4;
+ (void)enumeratePrimMaterials:(const map_9fbcb906 *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)parseUSDMaterial:(struct UsdShadeMaterial)arg1 rootUSD:(id)arg2 resolvedAttributes:(id)arg3 resourcePaths:(id)arg4 dirIdx:(unsigned long long *)arg5;
+ (void)resolveInput:(const struct UsdShadeInput *)arg1 withAssetPath:(id)arg2 rootUSD:(id)arg3 resourcePaths:(id)arg4 resolvedAttrs:(id)arg5 dirIdx:(unsigned long long *)arg6;
+ (void)resolveInputs:(const struct UsdShadeInput *)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (id)getResolvedPathForInput:(struct UsdShadeInput)arg1;
+ (id)resolveMaterialWithRootPath:(id)arg1 assetStringPath:(id)arg2 dirHash:(unsigned long long *)arg3;
+ (TfRefPtr_0090d76d)openStageWithURL:(id)arg1;

@end

