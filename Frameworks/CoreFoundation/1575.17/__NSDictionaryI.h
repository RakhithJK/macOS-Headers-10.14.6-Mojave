//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface __NSDictionaryI : NSDictionary
{
    unsigned int _used:58;
    unsigned int _szidx:6;
    id _list[0];
}

+ (id)__new:(const id *)arg1:(const id *)arg2:(struct __va_list_tag [1])arg3:(unsigned long long)arg4:(BOOL)arg5:(BOOL)arg6;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (double)_clumpingInterestingThreshold;
- (double)_clumpingFactor;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;

@end

