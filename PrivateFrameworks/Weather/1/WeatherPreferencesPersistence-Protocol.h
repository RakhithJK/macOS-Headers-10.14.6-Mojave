//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Weather/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol WeatherPreferencesPersistence <NSObject>
- (BOOL)synchronize;
- (void)setBool:(BOOL)arg1 forKey:(NSString *)arg2;
- (BOOL)boolForKey:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (NSArray *)arrayForKey:(NSString *)arg1;
@end

