//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CUTPowerAssertion : NSObject
{
    unsigned int _assertion;
    NSString *_identifier;
    NSArray *_stack;
}

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

@end

