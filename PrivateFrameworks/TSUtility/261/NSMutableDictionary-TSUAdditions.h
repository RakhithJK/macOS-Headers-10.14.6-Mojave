//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (TSUAdditions)
+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;
+ (id)tsu_dictionaryByInvertingDictionaryIfPossible:(id)arg1;
- (void)tsu_removeObjectsWithoutKeys:(id)arg1;
- (id)tsu_objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;
- (id)tsu_objectForKey:(id)arg1 withDefaultUsingBlock:(CDUnknownBlockType)arg2;
@end

