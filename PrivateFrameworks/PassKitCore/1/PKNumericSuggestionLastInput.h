//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSMutableDictionary, NSString;

@interface PKNumericSuggestionLastInput : NSObject
{
    NSString *_serialNumber;
    NSMutableDictionary *_passLastInputDictionary;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL wentToMax;
@property(copy, nonatomic) NSDecimalNumber *value;
- (void)save;
- (id)init;
- (id)initWithPassSerialNumber:(id)arg1;

@end

