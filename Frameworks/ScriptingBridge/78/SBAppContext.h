//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, SBAppLocator, SBApplication;

__attribute__((visibility("hidden")))
@interface SBAppContext : NSObject
{
    SBApplication *_application;
    NSMutableDictionary *_thunksForSelectors;
    NSMutableDictionary *_thunksForSelectorsForClassCodes;
    NSDictionary *_classNamesForCodes;
    NSDictionary *_codesForPropertyNames;
    NSDictionary *_codesForScriptingClassNames;
    NSDictionary *_inheritanceCodesForClassCodes;
    NSDictionary *_codesForClassNames;
    NSDictionary *_propertyNamesForCodes;
    NSDictionary *_scriptingClassNamesForCodes;
    NSString *_name;
    id _delegate;
    SBAppLocator *_locator;
    int _sendMode;
    long long _timeout;
}

+ (id)contextWithURL:(id)arg1;
+ (id)contextWithPID:(int)arg1;
+ (id)contextWithBundleIdentifier:(id)arg1;
- (void)setApplication:(id)arg1;
- (id)sdef;
- (id)qualifiedSpecifier;
- (id)bundleIdentifier;
- (id)path;
- (id)name;
- (id)sendEvent:(const struct AEDesc *)arg1 error:(id *)arg2;
- (id)processReply:(const struct AEDesc *)arg1 andError:(int)arg2 forEvent:(const struct AEDesc *)arg3 error:(id *)arg4;
- (id)eventFailed:(const struct AEDesc *)arg1 withError:(id)arg2;
- (short)createEmptyEvent:(struct AEDesc *)arg1 withClass:(unsigned int)arg2 id:(unsigned int)arg3;
- (id)descriptorForObject:(id)arg1 typeCode:(unsigned int)arg2;
- (id)descriptorForObject:(id)arg1;
- (id)objectForDescriptor:(const struct AEDesc *)arg1;
- (id)objectForDescriptor:(const struct AEDesc *)arg1 atIndex:(long long)arg2;
- (id)scriptingClassNameForCode:(unsigned int)arg1;
- (unsigned int)codeForScriptingClassName:(id)arg1;
- (Class)classForScriptingClass:(id)arg1;
- (id)propertyNameForCode:(unsigned int)arg1;
- (unsigned int)codeForPropertyName:(id)arg1;
- (id)propertyNamesForCodes;
- (id)codesForPropertyNames;
- (unsigned int)codeForClass:(Class)arg1;
- (Class)classForCode:(unsigned int)arg1;
- (id)codesForClassNames;
- (id)classNamesForCodes;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithPID:(int)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;
- (BOOL)dynamicMojo;
- (void)makeGlueForSdef:(id)arg1 basename:(id)arg2;
- (void)addThunk:(id)arg1 forClassCode:(unsigned int)arg2 element:(id)arg3;
- (void)object:(id)arg1 forwardInvocation:(id)arg2;
- (id)object:(id)arg1 methodSignatureForSelector:(SEL)arg2;
- (BOOL)object:(id)arg1 respondsToSelector:(SEL)arg2;
- (unsigned int)_declaredClassCodeForPropertyCode:(unsigned int)arg1 inClassCode:(unsigned int)arg2;
- (unsigned int)inheritanceCodeForClassCode:(unsigned int)arg1;
- (id)_thunkForObject:(id)arg1 andSelector:(SEL)arg2;

@end

