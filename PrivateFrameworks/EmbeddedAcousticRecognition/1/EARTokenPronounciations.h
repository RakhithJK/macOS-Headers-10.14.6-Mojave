//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EARTokenPronounciations : NSObject
{
    NSString *_token;
    NSArray *_pronunciations;
}

@property(copy, nonatomic) NSArray *pronunciations; // @synthesize pronunciations=_pronunciations;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (struct TokenProns)_quasarProns;
- (id)initWithToken:(id)arg1 pronunciations:(id)arg2;

@end

