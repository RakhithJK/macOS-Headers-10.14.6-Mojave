//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CharacterPicker/NSObject-Protocol.h>

@class NSString;
@protocol CPKCharacterEntity;

@protocol CPKDataSource <NSObject>
- (id <CPKCharacterEntity>)characterFromIdentifier:(NSString *)arg1;
- (id <CPKCharacterEntity>)characterAtIndex:(long long)arg1 inCategory:(long long)arg2;
- (id)titleForCategory:(long long)arg1;
- (long long)numberOfCharactersInCategory:(long long)arg1;
- (long long)numberOfCategories;
- (void)prepareDataUsingBlock:(void (^)(void))arg1;

@optional
- (long long)initialSelectedCategory;
- (NSString *)descriptionForCategory:(long long)arg1;
- (NSString *)storageIdentifier;
@end

