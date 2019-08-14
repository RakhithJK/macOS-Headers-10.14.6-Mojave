//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, PKPackageInfo;

@interface PKPackageChecker : NSObject
{
    NSString *_contentPath;
    PKPackageInfo *_packageInfo;
    NSDictionary *_componentMap;
    NSMutableArray *_checkResults;
    NSArray *_checkedAttrs;
}

+ (id)stringForCheckErrorCode:(int)arg1;
+ (id)_defaultCheckedFileAttributes;
@property(copy) NSArray *checkedFileAttributes; // @synthesize checkedFileAttributes=_checkedAttrs;
- (BOOL)_isValidScriptAtPath:(id)arg1 error:(id *)arg2;
- (id)_displayStringForBundleVersion:(id)arg1;
- (void)_checkBundle:(id)arg1 againstVersion:(id)arg2 usingDisplayPath:(id)arg3;
- (void)_searchForComponentsInDirectory:(id)arg1 addTo:(id)arg2;
- (BOOL)_shouldValidatePayload;
- (void)_checkScriptsAgainstPackageInfo:(id)arg1;
- (void)_checkPayloadAgainstPackageInfo:(id)arg1;
- (void)_checkPayloadAgainstBom;
- (id)checkResults;
- (void)dealloc;
- (id)initWithUnarchivedPackage:(id)arg1 error:(id *)arg2;

@end

