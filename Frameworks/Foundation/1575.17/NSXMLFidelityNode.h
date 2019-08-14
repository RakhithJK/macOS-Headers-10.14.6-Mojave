//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSXMLNode.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NSXMLFidelityNode : NSXMLNode
{
    unsigned long long _fidelity;
    NSString *_whitespace;
    NSMutableArray *_ranges;
    NSMutableArray *_names;
}

+ (unsigned short)charRefToUnicode:(const char *)arg1;
+ (id)stringValueSubstitutingEntitiesForNode:(id)arg1 ranges:(id)arg2 names:(id)arg3 objectValue:(id)arg4;
+ (void)setObjectValuePreservingEntitiesForNode:(id)arg1 string:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isCDATA;
- (void)setNames:(id)arg1;
- (void)setRanges:(id)arg1;
- (unsigned long long)fidelity;
- (void)setFidelity:(unsigned long long)arg1;
- (id)_XMLStringWithCharactersOnly;
- (void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)objectValue;
- (id)stringValue;
- (void)setStringValue:(id)arg1 resolvingEntities:(BOOL)arg2;
- (void)addEntity:(id)arg1 index:(unsigned long long)arg2;
- (id)whitespace;
- (void)setWhitespace:(id)arg1;
- (id)initWithKind:(unsigned long long)arg1;
- (void)dealloc;

@end

