//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <JavaScriptCore/JSContext.h>

@class NSError, NSHashTable, NSMutableArray, NSMutableDictionary;

@interface NUJSContext : JSContext
{
    NSHashTable *_collectedProxies;
    NSMutableArray *_stateStack;
    NSMutableDictionary *_functions;
    BOOL _didTimeOut;
    double _executionTimeLimit;
}

+ (void)execute:(CDUnknownBlockType)arg1;
+ (BOOL)validateValuesAreNumbers:(id)arg1 error:(out id *)arg2;
@property(nonatomic) double executionTimeLimit; // @synthesize executionTimeLimit=_executionTimeLimit;
@property BOOL didTimeOut; // @synthesize didTimeOut=_didTimeOut;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error;
- (void)setFunction:(id)arg1 forKey:(id)arg2;
- (id)functionForKey:(id)arg1;
- (id)currentState;
- (void)popState;
- (void)pushState:(id)arg1;
- (void)clearExecutionTimeLimit;
- (void)resetAllProxies;
- (void)addProxy:(id)arg1;
- (void)setupBuiltInFunctions;
- (id)init;

@end

