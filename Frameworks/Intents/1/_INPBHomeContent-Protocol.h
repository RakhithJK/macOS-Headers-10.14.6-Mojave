//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBHomeAttribute, _INPBHomeFilter;

@protocol _INPBHomeContent <NSObject>
+ (Class)actionsType;
@property(readonly, nonatomic) BOOL hasFilter;
@property(retain, nonatomic) _INPBHomeFilter *filter;
@property(readonly, nonatomic) unsigned long long actionsCount;
@property(copy, nonatomic) NSArray *actions;
- (_INPBHomeAttribute *)actionsAtIndex:(unsigned long long)arg1;
- (void)addActions:(_INPBHomeAttribute *)arg1;
- (void)clearActions;
@end

