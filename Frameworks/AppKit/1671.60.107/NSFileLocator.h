//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSFileLocator : NSObject <NSCopying>
{
    struct AliasRecord **_alias;
    NSString *_standardizedPath;
}

+ (BOOL)bestLocationRep:(id)arg1 matchesBestLocationRep:(id)arg2;
+ (id)bestLocationRepFromURL:(id)arg1;
+ (id)bestLocationRepFromPath:(id)arg1;
+ (id)_stringByReplacingChar:(unsigned short)arg1 withChar:(unsigned short)arg2 inString:(id)arg3;
+ (BOOL)_shouldUseAliasToLocate:(const struct FSRef *)arg1;
- (id)url;
- (id)standardizedPath;
- (id)specifier;
- (id)properties;
- (id)bestLocationRep;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithSpecifier:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithBestLocationRep:(id)arg1;

@end

