//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/ABAccountConfigurationInternal-Protocol.h>

@class NSString;

@interface ABAbstractAccountConfiguration : NSObject <ABAccountConfigurationInternal>
{
    BOOL _invalid;
}

- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setSearchable:(BOOL)arg1;
- (BOOL)isSearchable;
- (id)allPersistentKeysAndValues;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setPrimitiveBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)prmitiveBoolForKey:(id)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveValueForKey:(id)arg1;
- (BOOL)save:(id *)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
@property(readonly, getter=isInvalid) BOOL invalid;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
