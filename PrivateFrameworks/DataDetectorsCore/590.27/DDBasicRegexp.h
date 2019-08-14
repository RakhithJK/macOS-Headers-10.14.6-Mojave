//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDetectorsCore/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDBasicRegexp : NSObject <NSCopying>
{
    NSString *_humanReadableName;
}

+ (id)epsilon;
- (void)setHumanReadableName:(id)arg1;
- (id)humanReadableName;
- (id)effectiveArgument;
- (BOOL)acceptEmptyWordWithManager:(id)arg1;
- (void)appendDescriptionToString:(id)arg1 depth:(int)arg2;
- (id)prettyPrintWithPriority:(int)arg1;
- (int)splitRegexpWithDelegate:(id)arg1 owner:(id)arg2;
- (void)dealloc;
- (id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3;
- (id)monElement;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)computeTypeFromParent:(id)arg1 withManager:(id)arg2;
- (void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3;

@end

