//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNObjCClass : NSObject
{
    Class _cls;
}

+ (BOOL)addMethod:(id)arg1 toClass:(Class)arg2;
+ (id)allMethodsOfClass:(Class)arg1;
+ (id)instanceMethodOfClass:(Class)arg1 forSelector:(SEL)arg2;
+ (void)enumerateMethodsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)classWithClass:(Class)arg1;
- (BOOL)addMethod:(id)arg1;
- (id)instanceMethodForSelector:(SEL)arg1;
- (id)allMethods;
- (void)enumerateMethodsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithClass:(Class)arg1;

@end

