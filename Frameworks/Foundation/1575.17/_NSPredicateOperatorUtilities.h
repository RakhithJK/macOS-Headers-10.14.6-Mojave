//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSPredicateOperatorUtilities : NSObject
{
}

+ (void)escapeFullwidthRegexChars:(id)arg1;
+ (long long)copyRegexFindSafePattern:(id)arg1 toBuffer:(unsigned short *)arg2;
+ (BOOL)doRegexForString:(id)arg1 pattern:(id)arg2 likeProtect:(BOOL)arg3 flags:(unsigned long long)arg4 context:(CDStruct_4829dca9 *)arg5;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2;
+ (struct __CFLocale *)retainedLocale;

@end

