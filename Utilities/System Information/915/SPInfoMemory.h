//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface SPInfoMemory : NSObject
{
    NSMutableArray *_modules;
    BOOL _usesECC;
    BOOL _hasUpgradeableMemory;
    unsigned long long _totalSlots;
    unsigned long long _unusedSlots;
}

@property(readonly) BOOL hasUpgradeableMemory; // @synthesize hasUpgradeableMemory=_hasUpgradeableMemory;
@property(readonly) NSArray *modules; // @synthesize modules=_modules;
@property(readonly) unsigned long long unusedSlots; // @synthesize unusedSlots=_unusedSlots;
@property(readonly) unsigned long long totalSlots; // @synthesize totalSlots=_totalSlots;
@property(readonly) BOOL usesECC; // @synthesize usesECC=_usesECC;
@property(readonly) NSString *dimmType;
- (id)init;

@end

