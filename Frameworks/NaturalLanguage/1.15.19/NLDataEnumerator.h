//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NLDataProvider;

__attribute__((visibility("hidden")))
@interface NLDataEnumerator : NSObject
{
    NLDataProvider *_dataProvider;
    unsigned long long _idx;
}

- (void).cxx_destruct;
- (id)nextInstance;
- (id)initWithDataProvider:(id)arg1;

@end

