//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKEntity : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: store
}

- (void).cxx_destruct;
- (id)init;
- (id)linksTo:(id)arg1 matchType:(long long)arg2 error:(id *)arg3;
- (void)linksTo:(id)arg1 matchType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unlinkTo:(id)arg1 withPredicate:(id)arg2 ignoreWeights:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)linkTo:(id)arg1 withPredicate:(id)arg2 error:(id *)arg3;
- (void)linkTo:(id)arg1 withPredicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeValueForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setValuesForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)valuesForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)valueForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)valueForKey:(id)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;

@end

