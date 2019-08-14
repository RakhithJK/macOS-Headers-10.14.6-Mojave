//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScriptingBridge/NSCoding-Protocol.h>

@class SBAppContext;

@interface SBObject : NSObject <NSCoding>
{
    struct AEDesc _specifier;
    SBAppContext *_ctx;
    id _reserved;
}

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)_shouldUseForwarding;
- (BOOL)isRangeSpecifier;
- (id)qualifiedSpecifier;
- (id)qualify:(id)arg1;
- (id)description;
- (id)specifierDescription;
- (id)descriptionForSpecifier:(id)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)properties;
- (void)setTo:(id)arg1;
- (id)get;
- (id)sendEvent:(unsigned int)arg1 id:(unsigned int)arg2 format:(const char *)arg3;
- (id)sendEvent:(unsigned int)arg1 id:(unsigned int)arg2 parameters:(unsigned int)arg3;
- (id)elementWithCode:(unsigned int)arg1 ID:(id)arg2;
- (id)elementWithCode:(unsigned int)arg1 named:(id)arg2;
- (id)elementWithCode:(unsigned int)arg1 atIndex:(int)arg2;
- (id)elementArrayWithCode:(unsigned int)arg1;
- (id)propertyWithClass:(Class)arg1 code:(unsigned int)arg2;
- (id)propertyWithCode:(unsigned int)arg1;
- (id)positionAfter;
- (id)positionBefore;
- (id)childWithClass:(Class)arg1 code:(unsigned int)arg2 keyForm:(unsigned int)arg3 keyData:(id)arg4 type:(unsigned int)arg5;
- (id)childWithClass:(Class)arg1 code:(unsigned int)arg2 keyForm:(unsigned int)arg3 keyData:(const void *)arg4 length:(unsigned long long)arg5 type:(unsigned int)arg6;
- (id)childWithClass:(Class)arg1 code:(unsigned int)arg2 keyForm:(unsigned int)arg3 keyData:(id)arg4;
- (id)childWithClass:(Class)arg1 code:(unsigned int)arg2 keyForm:(unsigned int)arg3 keyDesc:(const struct AEDesc *)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)wanttype;
- (unsigned int)_wanttype:(const struct AEDesc *)arg1;
- (void)setLastError:(id)arg1;
- (id)lastError;
- (const struct AEDesc *)specifier;
- (const struct AEDesc *)_specifier;
- (id)context;
- (id)_context;
- (void)dealloc;
- (void)finalize;
- (id)initWithElementCode:(unsigned int)arg1 properties:(id)arg2 data:(id)arg3;
- (id)initWithData:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (id)init;
- (id)initWithClass:(Class)arg1 properties:(id)arg2 data:(id)arg3;
- (id)initWithApplication:(id)arg1 specifier:(const struct AEDesc *)arg2;
- (id)initWithContext:(id)arg1 specifier:(const struct AEDesc *)arg2;

@end

