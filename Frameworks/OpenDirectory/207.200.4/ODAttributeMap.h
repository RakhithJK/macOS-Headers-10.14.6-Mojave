//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface ODAttributeMap : NSObject
{
    NSString *customQueryFunction;
    NSString *customTranslationFunction;
    NSArray *customAttributes;
    NSString *value;
}

+ (id)attributeMapWithStaticValue:(id)arg1;
+ (id)attributeMapWithValue:(id)arg1;
+ (id)attributeMapFromDictionary:(id)arg1;
@property(copy) NSString *value; // @synthesize value;
@property(copy) NSArray *customAttributes; // @synthesize customAttributes;
@property(copy) NSString *customTranslationFunction; // @synthesize customTranslationFunction;
@property(copy) NSString *customQueryFunction; // @synthesize customQueryFunction;
@property(readonly, copy) NSDictionary *dictionary;
- (void)setVariableSubstitution:(id)arg1;
- (void)setStaticValue:(id)arg1;

@end

