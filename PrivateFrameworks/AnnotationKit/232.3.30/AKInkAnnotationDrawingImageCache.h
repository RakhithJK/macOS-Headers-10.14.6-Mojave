//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface AKInkAnnotationDrawingImageCache : NSObject
{
    NSPointerArray *_pointerArray;
}

+ (void)purgeSharedCache;
+ (id)sharedCache;
@property(retain, nonatomic) NSPointerArray *pointerArray; // @synthesize pointerArray=_pointerArray;
- (void).cxx_destruct;
- (void)_addEntryWithObject:(id)arg1 key:(id)arg2;
- (void)_removeEntryAtIndex:(unsigned long long)arg1;
- (void)_makeKeyMostRecentlyUsed:(id)arg1;
- (long long)_indexOfPointer:(void *)arg1;
- (void)_purgeExtraEntries;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)init;

@end

