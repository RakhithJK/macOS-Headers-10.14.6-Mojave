//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCTAutomationSupport/XCTMatchingElementIterator.h>

@class NSEnumerator, XCTElementFilteringTransformer;

@interface XCTFilteringTransformerIterator : XCTMatchingElementIterator
{
    NSEnumerator *_inputEnumerator;
    XCTElementFilteringTransformer *_filteringTransformer;
}

@property(readonly) XCTElementFilteringTransformer *filteringTransformer; // @synthesize filteringTransformer=_filteringTransformer;
- (void).cxx_destruct;
- (id)nextMatch;
- (id)initWithInput:(id)arg1 filteringTransformer:(id)arg2;

@end

