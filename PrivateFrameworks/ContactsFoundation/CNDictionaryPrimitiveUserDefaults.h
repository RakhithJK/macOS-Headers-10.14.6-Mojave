//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNPrimitiveUserDefaults-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNDictionaryPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults>
{
    NSMutableDictionary *_preferences;
    unsigned long long _synchronizeCount;
    unsigned long long _setupAutosyncCount;
}

@property(readonly) unsigned long long setupAutosyncCount; // @synthesize setupAutosyncCount=_setupAutosyncCount;
@property(readonly) unsigned long long synchronizeCount; // @synthesize synchronizeCount=_synchronizeCount;
- (void).cxx_destruct;
- (void)setupAutosync;
- (BOOL)synchronize;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(char *)arg2;
- (BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(char *)arg2;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (id)primitiveObjectForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

