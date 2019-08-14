//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>
#import <NeutrinoCore/NUSpaceMapping-Protocol.h>

@class NSMutableDictionary;

@interface NUGeometrySpaceMap : NSObject <NSCopying, NUSpaceMapping>
{
    NSMutableDictionary *_spaces;
}

+ (id)_reduceSpaces:(id)arg1 withSpaces:(id)arg2;
+ (BOOL)_canReduceSpaces:(id)arg1 withSpaces:(id)arg2;
@property(retain) NSMutableDictionary *spaces; // @synthesize spaces=_spaces;
- (void).cxx_destruct;
- (id)description;
- (id)transformWithSourceSpace:(id)arg1 destinationSpace:(id)arg2 error:(out id *)arg3;
- (void)mergeWithSpaceMap:(id)arg1;
- (void)setSpacesFromMap:(id)arg1 andPruneAgainstTagNode:(id)arg2 withPath:(id)arg3;
- (void)setSpaces:(id)arg1 forKey:(id)arg2;
- (void)setSpace:(id)arg1 forKey:(id)arg2;
- (id)spaceForKey:(id)arg1;
- (id)spacesForKey:(id)arg1;
- (id)taggedSpacesForKey:(id)arg1;
- (void)addTagNode:(id)arg1;
- (void)applyTransform:(id)arg1;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpaceMap:(id)arg1;
- (id)init;

@end

